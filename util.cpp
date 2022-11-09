/**
 * @author : Rachel Tranchida
 * @date : 02.11.2022
 * @file : util
 * @project : Life
 */
#include "util.h"
#include <iostream>

using namespace std;

void setWindowsConsoleToUTF8() {
#ifdef _WIN32

    system(("chcp "s + to_string(CP_UTF8)).c_str()); //for colored output in console

#endif
}

void clearConsole() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

void setConsoleCursor(short i, short j) {
#ifdef _WIN32
    COORD Coord;
    Coord.X = i;
    Coord.Y = j;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Coord);
#else
    printf("\033[%d;%dH", i, j);
#endif

}

void calculateNewClosedCoord(unsigned long vectorSizeX, unsigned long vectorSizeY, unsigned long &x, unsigned long &y,
                             int dirX, int dirY) {
    unsigned long coordX, coordY;

    if (x + dirX < 0) {
        coordX = vectorSizeX - 1;
    } else if (x + dirX > vectorSizeX - 1) {
        coordX = 0;
    } else {
        coordX = x + dirX;
    }

    if (y + dirY < 0) {
        coordY = vectorSizeY - 1;
    } else if (y + dirY > vectorSizeY - 1) {
        coordY = 0;
    } else {
        coordY = y + dirY;
    }
    x = coordX;
    y = coordY;
}



