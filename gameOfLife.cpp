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
#include "userInterface.h"

using namespace std;


void playGame() {
    vector<vector<Cells>> grid(gridSizeX, vector<Cells>(gridSizeY, Cells::DEAD));
    askUserPattern(grid);
    //addStructure(grid, GLIDER_GUN, 0, 0);
    //addStructure(grid, BOAT, 1, 1);

    for(int i = 0; i < 20; i++) {
        setConsoleCursorToStart(0, 0);
        clearConsole();

        showEvolution(grid);
        evolution(grid);
        showEvolution(grid);


        wait(500);
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
