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

void setConsoleCursorToStart() {
#ifdef _WIN32
    COORD Coord;
    Coord.X = 0.0;
    Coord.Y = 0.0;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Coord);
#else
    printf("\033[%d;%dH", 0, 0);
#endif
}





