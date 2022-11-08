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

using namespace std;


void playGameOfLife() {
    vector<vector<Cells>> grid(gridSizeX, vector<Cells>(gridSizeY, Cells::DEAD));
    //askUserPattern(grid);
    addStructure(grid, GLIDER_GUN, 0, 0);
    //addStructure(grid, BOAT, 1, 1);
    adaptGrid(grid);
    for(int i = 0; i < 100; i++) {
        setConsoleCursorToStart();
        clearConsole();

        evolution(grid);
        adaptGrid(grid);

        showEvolution(grid);

        this_thread::sleep_for(chrono::milliseconds(50));
    }
}

void addStructure(vector<vector<Cells>> &grid, const vector<vector<Cells>> &pattern, unsigned long posX, unsigned long posY) {
   if(posX + pattern.size() <= grid.size() and posY + pattern[0].size() <= grid[0].size()) {
       for (int i = 0; i < pattern.size(); i++) {
           for (int j = 0; j < pattern[i].size(); j++) {
               grid[i + posX][j + posY] = pattern[i][j];
           }
       }
   }
}
