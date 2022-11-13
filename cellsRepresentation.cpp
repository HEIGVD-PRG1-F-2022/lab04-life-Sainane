/**
 * @author : Rachel Tranchida
 * @date : 02.11.2022
 * @file : cellsRepresentation
 * @project : Life
 */

#include "cellsRepresentation.h"
#include "config.h"
#include <iostream>
#include <vector>

using namespace std;


void showEvolution(const vector<vector<Cells>> &grid) {

    cout << gridCellsToString(grid) << endl;
}

string gridCellsToString(const vector<vector<Cells>> &grid) {
    string toShow;
    toShow += BORDER;
    for (int i = 0; i < grid[0].size() + 1; i++) {
        toShow += " " + BORDER;
    }
    toShow += "\n";
    for (const auto &i: grid) {
        toShow += BORDER;
        for (const auto &j: i) {
            toShow += ((j == Cells::DEAD) ? DEAD_CELL_DISPLAY : ALIVE_CELL_DISPLAY);

        }
        toShow += " " + BORDER + "\n";
    }
    toShow += BORDER;
    for (int i = 0; i < grid[0].size() + 1; i++) {
        toShow += " " + BORDER;
    }
    return toShow;
}