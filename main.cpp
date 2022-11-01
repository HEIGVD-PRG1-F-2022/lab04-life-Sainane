#include <iostream>
#include <vector>
#include <iomanip>
#include "config.h"

using namespace std;

vector<vector<int>> grid = {
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

void evolution();
void showEvolution() {
    string toShow;


    for(const auto &i : grid) {
        for(const auto &j : i) {
            if(j == 0) {
                cout << 0;
            } else {
              cout << 1;
            }
        }
        cout << endl;
    }
    cout << endl;
}

int main() {
    for(int i = 0; i < 10; i++) {
        evolution();
        showEvolution();
        setConsoleCursorToStart();
    }


    return 0;
}

void evolution() {
    vector<vector<int>> lastState(grid);
    int count = 0;
    for(int i = 1; i < lastState.size()-1; i++) {
        for(int j = 1; j < lastState[i].size()-1; j++) {
            count = lastState[i-1][j-1] + lastState[i-1][j] + lastState[i-1][j+1] + lastState[i][j+1] + lastState[i+1][j+1] + lastState[i+1][j] +lastState[i+1][j-1] + lastState[i][j-1];
            if(count == 3) {
                grid[i][j] = 1;
            } else if(count < 2 or count > 3) {
                grid[i][j] = 0;
            }
        }
    }
}