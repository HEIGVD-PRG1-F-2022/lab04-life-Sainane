/**
 * @author : Rachel Tranchida
 * @date : 02.11.2022
 * @file : cellsReprensetation
 * @project : Life
 */

#include "cellsRepresentation.h"
#include "config.h"
#include <iostream>
#include <vector>

using namespace std;

ostream &operator<<(ostream &os, const Cells &cell) {
    os << ((cell == Cells::DEAD) ? DEAD_CELL_DISPLAY : ALIVE_CELL_DISPLAY);
    return os;
}

ostream &operator<<(ostream &os, const vector<vector<Cells>> &grid) {
    string toShow;
    for (const auto &i: grid) {
        for (const auto &j: i) {
            os << j;
        }
        os << endl;
    }
    return os;
}


void showEvolution(const vector<vector<Cells>> &grid) {
    string toShow;
    toShow += "#";
    for (int i = 0; i < grid[0].size() + 1; i++) {
        toShow += " #";
    }
    toShow += "\n";
    for (const auto &i: grid) {
        toShow += "#";
        for (const auto &j: i) {
            toShow += ((j == Cells::DEAD) ? DEAD_CELL_DISPLAY : ALIVE_CELL_DISPLAY);

        }
        toShow += " #\n";
    }
    toShow += "#";
    for (int i = 0; i < grid[0].size() + 1; i++) {
        toShow += " #";
    }

    cout << toShow << endl;
}
