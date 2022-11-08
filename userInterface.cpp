/**
 * @author : Rachel Tranchida
 * @date : 02.11.2022
 * @file : userInterface
 * @project : Life
 */
#include "userInterface.h"
#include <vector>
#include "util.h"

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
        cout << "Cellule " << i+1 <<  endl << "x : ";
       cin >> x;
        cout << "y : ";
        cin >> y;

        grid[x][y] = Cells::ALIVE;

    }



}

void userInterface(vector<vector<Cells>> &grid) {
    static int subMenu = 0;
    cout << "Mode : " << endl;
    cout << "1) Configuration" << endl;
    cout << "2) Free pattern simulation" << endl;
    cout << "3) Simulation with predefined patterns" << endl;
    int menu;
    cin >> menu;

    switch(menu) {
        case 2 :
            subMenu = 2;

    }
    char choice;
    switch(subMenu) {
        case 2 :
            int x(0), y(0);
            cout << "Do something " << endl;
            while(true) {





                showSelectionBoard(grid, x, y);
                setConsoleCursor();
                cin >> choice;
                calculateNewClosedCoord(grid.size(), grid[0].size(), x, y,
                                        (((choice == 'w') ? -1 : ((choice == 's') ? 1 : 0))),
                                        (((choice == 'a') ? -1 : ((choice == 'd') ? 1 : 0))));
                if (choice == 'x') {
                    break;
                }

                if(choice == 'q') {
                    grid[x][y] = ((grid[x][y] == Cells::ALIVE)? Cells::DEAD : Cells::ALIVE);
                }
            }
            break;
    }
}
void showSelectionBoard(const vector<vector<Cells>> &grid, int &x, int &y) {
    string toShow;
    toShow += "\n";

    for(size_t i = 0; i < grid.size(); i++) {
        for(size_t j = 0; j < grid[i].size(); j++) {
            if(x == i and y == j) {
                toShow+= "\x1b[38;2;0;0;255m";
                toShow += ((grid[i][j] == Cells::ALIVE) ? " o" : " x");
                toShow += "\x1b[0m";
            } else {
                toShow += "\x1b[38;2;255;255;0m";
                toShow += ((grid[i][j] == Cells::ALIVE) ? " o" : " x");
                toShow +="\x1b[0m";
            }
        }
        toShow+= "\n";
    }
    setConsoleCursor(0, 0);
    clearConsole();

    cout << toShow << endl;
    setConsoleCursor(0, 0);
    setConsoleCursor(0, 1);
}