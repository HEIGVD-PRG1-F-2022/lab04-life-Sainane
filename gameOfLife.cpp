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

using namespace std;
const  vector<vector<Cells>> BOAT = {{Cells::ALIVE, Cells::ALIVE, Cells::DEAD},
                                     {Cells::ALIVE, Cells::DEAD, Cells::ALIVE},
                                     {Cells::DEAD, Cells::ALIVE, Cells::DEAD}
};
const  vector<vector<Cells>> GLIDER = {{Cells::ALIVE, Cells::DEAD, Cells::DEAD},
                                       {Cells::DEAD, Cells::ALIVE, Cells::ALIVE},
                                       {Cells::ALIVE, Cells::ALIVE, Cells::DEAD}
};
void playGame() {
    vector<vector<Cells>> grid(gridSizeX, vector<Cells>(gridSizeY, Cells::DEAD));
    addStructure(grid, GLIDER, 0, 0);
    addStructure(grid, GLIDER, 10, 0);
    for(int i = 0; i < 30; i++) {

        clearConsole();
        evolution(grid);
        cout << grid << endl;

        wait(500);
    }
}

void addStructure(vector<vector<Cells>> &grid, const vector<vector<Cells>> &structure, unsigned long posX, unsigned long posY) {
   for(int i = 0; i < structure.size(); i++) {
       for(int j = 0; j < structure.size(); j++) {
           grid[i+posX][j+posY] = structure[i][j];
       }
   }
}