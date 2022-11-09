/**
 * @author : Rachel Tranchida
 * @date : 02.11.2022
 * @file : gameOfLife
 * @project : Life
 */
#include "gameOfLife.h"
#include "lifeAlgorithms.h"
#include <vector>
#include "util.h"
#include "cellsRepresentation.h"
#include "config.h"
#include "patterns.h"
#include <chrono>
#include <thread>
#include "userInterface.h"

using namespace std;

void simulateLife(vector<vector<Cells>> &grid, bool adaptativeGrid) {

}

int menu(vector<Option> options) {

}

void playGameOfLife() {
    bool adaptativeGrid = false;
    vector<vector<Cells>> grid(gridSizeX, vector<Cells>(gridSizeY, Cells::DEAD));
    userInterface(grid, adaptativeGrid);

    for (int i = 0; i < 1000; i++) {


        if (adaptativeGrid) {
            adaptGrid(grid);
        }
        evolution(grid);
        clearConsole();
        showEvolution(grid);
        setConsoleCursor(0, 0);
        this_thread::sleep_for(chrono::milliseconds(250));


    }
}

void addStructure(vector<vector<Cells>> &grid, const vector<vector<Cells>> &pattern, unsigned long posX,
                  unsigned long posY) {
    if (posX + pattern.size() <= grid.size() and posY + pattern[0].size() <= grid[0].size()) {
        for (int i = 0; i < pattern.size(); i++) {
            for (int j = 0; j < pattern[i].size(); j++) {
                grid[i + posX][j + posY] = pattern[i][j];
            }
        }
    }
}
