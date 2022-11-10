/**
 * @author : Rachel Tranchida
 * @date : 02.11.2022
 * @file : lifeAlgorithms
 * @project : Life
 */
#include "lifeAlgorithms.h"
#include "cellsRepresentation.h"
#include <vector>
#include "util.h"

using namespace std;


void evolution(vector<vector<Cells>> &grid) {

    //we copy the current grid to update all cells according to last state
    vector<vector<Cells>> lastState(grid);

    for (int i = 0; i < lastState.size(); i++) {
        for (int j = 0; j < lastState[i].size(); j++) {
            switch (countNeighbours(lastState, i, j)) {
                case 2 :
                    break;
                case 3 :
                    grid[i][j] = Cells::ALIVE;
                    break;
                default :
                    grid[i][j] = Cells::DEAD;
                    break;
            }
        }
    }
}

int countNeighbours(const vector<vector<Cells>> &grid, int x, int y) {
    int numberOfNeighbours = 0;
    //distance of neighbour we want to count
    const int DISTANCE = 1;
    //to test for neighbours in all directions
    for (int i = -DISTANCE; i <= DISTANCE; i++) {
        for (int j = -DISTANCE; j <= DISTANCE; j++) {
            if (i != 0 or j != 0) { //except the cell we consider
                if (hasNeighbour(grid, x, y, i, j)) {
                    ++numberOfNeighbours;
                }
            }
        }
    }
    return numberOfNeighbours;
}

bool hasNeighbour(const vector<vector<Cells>> &grid, unsigned long x, unsigned long y, int dirX, int dirY) {
    //unsigned long coordX, coordY;
    calculateNewClosedCoord(grid.size(), grid[0].size(), x, y, dirX, dirY);
    return (grid[x][y] != Cells::DEAD);
}


void adaptGrid(vector<vector<Cells>> &grid) {
    unsigned long firstAliveX = grid.size() - 1;
    unsigned long firstAliveY = grid[0].size() - 1;
    unsigned long lastAliveX = 0;
    unsigned long lastAliveY = 0;
    vector<vector<Cells>> saveGrid(grid);
    for (int i = 0; i < grid.size(); i++) {
        for (int j = 0; j < grid[i].size(); j++) {
            if (grid[i][j] == Cells::ALIVE) {
                if (firstAliveX > i) {
                    firstAliveX = i;
                }
                if (lastAliveX < i) {
                    lastAliveX = i;
                }
                if (firstAliveY > j) {
                    firstAliveY = j;
                }
                if (lastAliveY < j) {
                    lastAliveY = j;
                }

            }

        }
    }

    grid.clear();
    grid.emplace_back(lastAliveY - firstAliveY + 3, Cells::DEAD);
    for (size_t i = firstAliveX; i < lastAliveX + 1; i++) {
        grid.emplace_back();
        grid[i - firstAliveX + 1].push_back(Cells::DEAD);
        for (size_t j = firstAliveY; j < lastAliveY + 1; j++) {
            grid[i - firstAliveX + 1].push_back(saveGrid[i][j]);
        }
        grid[i - firstAliveX + 1].push_back(Cells::DEAD);

    }
    grid.emplace_back(lastAliveY - firstAliveY + 3, Cells::DEAD);
}