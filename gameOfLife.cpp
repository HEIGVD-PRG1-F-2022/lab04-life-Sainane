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
#include <chrono>
#include <thread>
#include "userInterface.h"

using namespace std;

void simulateLife(vector<vector<Cells>> &grid, int numberOfEvolution, bool adaptativeGrid) {

    clearConsole();
    setConsoleCursor(0, 0);

    for (int i = 0; i < numberOfEvolution; i++) {


        if (adaptativeGrid) {
            adaptGrid(grid);
        }
        evolution(grid);
        showEvolution(grid);
        setConsoleCursor(0, 0);
        hideCursor();
        this_thread::sleep_for(chrono::milliseconds(250));


    }
}


void playGameOfLife() {
    setWindowsConsoleToUTF8(); //for correct output on Windows OS
    bool adaptativeGrid = false;
    vector<vector<Cells>> grid(GRID_SIZE_X, vector<Cells>(GRID_SIZE_Y, Cells::DEAD));
    //ask user to initialise grid and choose if the grid is adaptative or not
    userInterface(grid, adaptativeGrid);
    //make evolution and print each evolution
    simulateLife(grid, EVOLUTION_NUMBER, adaptativeGrid);

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
