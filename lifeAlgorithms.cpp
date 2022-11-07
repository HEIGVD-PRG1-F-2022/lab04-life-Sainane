/**
 * @author : Rachel Tranchida
 * @date : 02.11.2022
 * @file : lifeAlgorithms
 * @project : Life
 */
#include "lifeAlgorithms.h"
#include "cellsRepresentation.h"
#include <vector>
using namespace std;


void evolution(vector<vector<Cells>> &grid) {
    vector<vector<Cells>> lastState(grid);
    int count;
    for(int i = 0; i < lastState.size(); i++) {
        for(int j = 0; j < lastState[i].size(); j++) {
            count = countNeighbours(lastState, i, j);
            if(count ==3) {
                grid[i][j] = Cells::ALIVE;
            } else if(count < 2 or count > 3) {
                grid[i][j] = Cells::DEAD;
            }
        }
    }
}

int countNeighbours(const vector<vector<Cells>> &grid, int i, int j) {
    int numberOfNeighbours = 0;
    for(int x = -1; x <= 1; x++) {
        for(int y = -1; y <= 1 ; y++) {
            if(x != 0 or y != 0) {
                if(hasNeighbour(grid, i, j, x, y)) {
                    ++numberOfNeighbours;
                }
            }
        }
    }
    return numberOfNeighbours;
}

bool hasNeighbour(const vector<vector<Cells>> &grid, int i, int j, int dirX, int dirY) {
    unsigned long coordX, coordY;
    if(i + dirX < 0) {
        coordX = grid.size()-1;
    } else if(i + dirX >  grid.size()-1) {
        coordX = 0;
    } else {
        coordX = i + dirX;
    }

    if(j + dirY < 0) {
        coordY = grid[i].size()-1;
    } else if(j + dirY > grid[i].size()-1) {
        coordY = 0;
    } else {
        coordY = j + dirY;
    }
    return (grid[coordX][coordY] != Cells::DEAD);
}