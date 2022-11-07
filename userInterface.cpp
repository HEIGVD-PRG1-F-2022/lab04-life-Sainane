/**
 * @author : Rachel Tranchida
 * @date : 02.11.2022
 * @file : userInterface
 * @project : Life
 */
#include "userInterface.h"
#include "config.h"
#include <vector>

using namespace std;

void drawPattern(vector<vector<Cells>> &grid) {

}

void askUserPattern(vector<vector<Cells>> &grid) {
    int cellsToPlace;
    cout << "Number of cells to add : ";
    cin >> cellsToPlace;

    int x, y;
    for(int i = 0; i < cellsToPlace; i++) {
        string coord;
        cout << "Cellule " << i+1 << " x : ";
       cin >> x;
        cout << "Cellule " << i+1 << " y : ";
        cin >> y;

        grid[x][y] = Cells::ALIVE;

    }



}
