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

void hideCursor() {
#ifdef _WIN32
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO info;
    info.dwSize = 100;
    info.bVisible = FALSE;
    SetConsoleCursorInfo(consoleHandle, &info);
#else
    printf("\e[?25l");
#endif
}

void calculateNewClosedCoord(unsigned long vectorSizeX, unsigned long vectorSizeY, unsigned long &x, unsigned long &y,
                             int dirX, int dirY) {
    int coordX((int) x), coordY((int) y);

    if (coordX + dirX < 0) {
        x = vectorSizeX - 1;
    } else if (coordX + dirX > vectorSizeX - 1) {
        x = 0;
    } else {
        x = coordX + dirX;
    }

    if (coordY + dirY < 0) {
        y = vectorSizeY - 1;
    } else if (coordY + dirY > vectorSizeY - 1) {
        y = 0;
    } else {
        y = coordY + dirY;
    }
}



