/**
 * @author : Rachel Tranchida
 * @date : 02.11.2022
 * @file : userInterface3
 * @project : Life
 */
#include "userInterface.h"
#include <vector>
#include "util.h"
#include "patterns.h"
#include "gameOfLife.h"
#include <limits>
#include "config.h"

using namespace std;


void userInterface3(vector<vector<Cells>> &grid, bool &adaptativeGrid) {

    while (true) {
        clearConsole();
        setConsoleCursor();
        cout << "Enter the number of the option you want" << endl;
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

void showSelectionBoard(const vector<vector<Cells>> &grid, unsigned long &x, unsigned long &y) {
    string toShow;
    toShow += "\n";

    for (size_t i = 0; i < grid.size(); i++) {
        for (size_t j = 0; j < grid[i].size(); j++) {
            if (x == i and y == j) {
                toShow += "\x1b[38;2;85;85;255m";
                toShow += ((grid[i][j] == Cells::ALIVE) ? " o" : " x");
                toShow += "\x1b[0m";
            } else {
                toShow += "\x1b[38;2;85;255;255m";
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
    unsigned long x(0), y(0);
    int dirX, dirY;

    while (true) {
        dirX = 0;
        dirY = 0;
        showSelectionBoard(grid, x, y);
        setConsoleCursor();
        cout << "Enter command (up : " << UP << ", down : " << DOWN <<
             ", right : " << RIGHT << ", left : " << LEFT << ", change cell : "
             << CHANGE_CELL_STATE << ", start simulation : " << START << ") : ";

        while (not(cin >> choice)) {

        }

        switch (choice) {
            case START :
                return true;
            case UP :
                dirX = -1;
                break;
            case DOWN :
                dirX = 1;
                break;
            case RIGHT :
                dirY = 1;
                break;
            case LEFT :
                dirY = -1;
                break;
            case CHANGE_CELL_STATE :
                grid[x][y] = ((grid[x][y] == Cells::ALIVE) ? Cells::DEAD : Cells::ALIVE);
                break;
            default :
                break;
        }
        calculateNewClosedCoord(grid.size(), grid[0].size(), x, y,
                                dirX,
                                dirY);
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

int menu(const string &title, const string &description, const vector<string> &options) {
    clearConsole();
    setConsoleCursor();
    cout << title << endl << endl;
    cout << description << endl << endl;
    for (int i = 0; i < options.size(); i++) {
        cout << i << ")" << " " << options[i] << endl;
    }

    int choice;
    while (not(cin >> choice) or (choice < 0 or choice >= options.size())) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    return choice;


}

void userInterface(vector<vector<Cells>> &grid, bool &adaptativeGrid) {
    int choice;
    menu(TITLE, "",
         {"Enter 0 to start"});

    choice = menu(TITLE, "Choose grid type : ", {"Fixed/Closed", "Adaptative"});
    switch (choice) {
        case 0 :
            adaptativeGrid = 0;
            break;
        case 1 :
            adaptativeGrid = 1;
            break;
    }

    choice = menu(TITLE, "Enter the number of the option you want",
                  {"Free pattern simulation", "Simulation with predefined patterns"});

    switch (choice) {
        case 0 :
            userDrawGrid(grid);
            break;
        case 1 :
            selectPattern(grid);
            break;
    }
}