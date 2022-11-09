/**
 * @author : Rachel Tranchida
 * @date : 02.11.2022
 * @file : userInterface
 * @project : Life
 */
#include "userInterface.h"
#include <vector>
#include "util.h"
#include "patterns.h"
#include "gameOfLife.h"
#include <limits>

using namespace std;

void drawPattern(vector<vector<Cells>> &grid) {

}


void askUserPattern(vector<vector<Cells>> &grid) {
    int cellsToPlace;
    cout << "Number of cells to add : ";
    cin >> cellsToPlace;

    int x, y;
    for (int i = 0; i < cellsToPlace; i++) {
        string coord;
        cout << "Cellule " << i + 1 << endl << "x : ";
        cin >> x;
        cout << "y : ";
        cin >> y;

        grid[x][y] = Cells::ALIVE;

    }


}


void userInterface(vector<vector<Cells>> &grid, bool &adaptativeGrid) {

    while (true) {
        clearConsole();
        setConsoleCursor();
        cout << "Press number of option you want" << endl;
        cout << "1) Change grid type (current : " << (adaptativeGrid ? "Adaptative" : "Fixed / infinite") << ")"
             << endl;
        cout << "2) Free pattern simulation" << endl;
        cout << "3) Simulation with predefined patterns" << endl;
        int menu;

        while (not(cin >> menu)) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        switch (menu) {
            case 1 :
                adaptativeGrid = !adaptativeGrid;
                break;
            case 2 :
                if (userDrawGrid(grid)) {
                    return;
                }
                break;
            case 3 :
                if (selectPattern(grid)) {
                    return;
                }
                break;
            default :
                break;

        }

    }

}

void showSelectionBoard(const vector<vector<Cells>> &grid, int &x, int &y) {
    string toShow;
    toShow += "\n";

    for (size_t i = 0; i < grid.size(); i++) {
        for (size_t j = 0; j < grid[i].size(); j++) {
            if (x == i and y == j) {
                toShow += "\x1b[38;2;0;0;255m";
                toShow += ((grid[i][j] == Cells::ALIVE) ? " o" : " x");
                toShow += "\x1b[0m";
            } else {
                toShow += "\x1b[38;2;255;255;0m";
                toShow += ((grid[i][j] == Cells::ALIVE) ? " o" : " x");
                toShow += "\x1b[0m";
            }
        }
        toShow += "\n";
    }
    setConsoleCursor(0, 0);
    clearConsole();

    cout << toShow << endl;
    setConsoleCursor(0, 0);
    setConsoleCursor(0, 1);
}

bool userDrawGrid(vector<vector<Cells>> &grid) {
    char choice;
    int x(0), y(0);
    cout << "Do something " << endl;
    while (true) {

        showSelectionBoard(grid, x, y);
        setConsoleCursor();
        cin >> choice;
        calculateNewClosedCoord(grid.size(), grid[0].size(), x, y,
                                (((choice == 'w') ? -1 : ((choice == 's') ? 1 : 0))),
                                (((choice == 'a') ? -1 : ((choice == 'd') ? 1 : 0))));
        if (choice == '0') {
            return false;
        }
        if (choice == 'r') {
            return true;
        }

        if (choice == 'q') {
            grid[x][y] = ((grid[x][y] == Cells::ALIVE) ? Cells::DEAD : Cells::ALIVE);
        }
    }
}

bool selectPattern(vector<vector<Cells>> &grid) {
    int number;
    cout << "1) Still life" << endl;
    showEvolution(BOAT);
    cout << "2) Spaceship" << endl;
    showEvolution(GLIDER);
    cout << "3) Oscillator" << endl;
    showEvolution(MAZING);
    cout << "4) Glider Gun" << endl;
    showEvolution(GLIDER_GUN);
    cout << "Choose pattern number : " << endl;
    while (not(cin >> number)) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    switch (number) {
        case 0 :
            return false;
        case 1 :
            addStructure(grid, BOAT);
            break;
        case 2 :
            addStructure(grid, GLIDER);
            break;
        case 3 :
            addStructure(grid, MAZING, 1, 1);
            break;
        case 4 :
            addStructure(grid, GLIDER_GUN);
            break;
        default :
            break;
    }
    return true;
}