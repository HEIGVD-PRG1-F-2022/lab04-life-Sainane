#include <iostream>
#include <vector>
#include "config.h"

using namespace std;
#define DEAD "\x1b[38;2;255;255;255m  *\x1b[0m"
#define ALIVE "\x1b[38;2;0;0;0m  *\x1b[0m"
vector<vector<int>> grid1 = {
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 1, 1, 1, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
};
vector<vector<int>> grid2 = {
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 1, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 1, 1, 0, 0, 0, 0},
        {0, 0, 0, 1, 1, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
};
int countNeighbours(const vector<vector<int>> &grid, int i, int j);
bool hasNeighbour(const vector<vector<int>> &grid, int i, int j, int dirX, int dirY);
void evolution(vector<vector<int>> &grid);
void showEvolution(const vector<vector<int>> &grid) {


    for(const auto &i : grid) {
        for(const auto &j : i) {
            if(j == 0) {
                cout << DEAD;
            } else {
              cout << ALIVE;
            }
        }
        cout << endl;
    }
    cout << endl;
}

int main() {
    for(int i = 0; i < 30; i++) {

        clearConsole();
        evolution(grid2);
        showEvolution(grid2);

        wait(500);
    }


    return 0;
}

void evolution(vector<vector<int>> &grid) {
    vector<vector<int>> lastState(grid);
    int count;
    for(int i = 0; i < lastState.size(); i++) {
        for(int j = 0; j < lastState[i].size(); j++) {
            count = countNeighbours(lastState, i, j);
            if(count ==3) {
                grid[i][j] = 1;
            } else if(count < 2 or count > 3) {
                grid[i][j] = 0;
            }
        }
    }
}

int countNeighbours(const vector<vector<int>> &grid, int i, int j) {
    int numberOfNeighbours = 0;
    for(int x = -1; x <=1; x++) {
        for(int y = -1; y <=1 ; y++) {
            if(x != 0 or y != 0) {
               if(hasNeighbour(grid, i, j, x, y)) {
                   ++numberOfNeighbours;
               }
            }
        }
    }
    return numberOfNeighbours;
}

bool hasNeighbour(const vector<vector<int>> &grid, int i, int j, int dirX, int dirY) {
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
  return (grid[coordX][coordY] != 0);
}