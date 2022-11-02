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
ostream& operator<<(ostream& os, const Cells& cell)
{
    os << ((cell==Cells::DEAD) ? DEAD_COLOR : ALIVE_COLOR);
    return os;
}
ostream& operator<<(ostream& os, const vector<vector<Cells>> &grid)
{
    for(const auto& i : grid) {
        for(const auto& j : i) {
            os << j;
        }
        os << endl;
    }

    return os;
}