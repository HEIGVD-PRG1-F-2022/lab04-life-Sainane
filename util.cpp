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
void wait(int milliseconds) {
#ifdef _WIN32
    Sleep(milliseconds);
#else
    sleep(milliseconds / 1000);
#endif
}

void setConsoleCursorToStart(int i, int j) {
#ifdef _WIN32
    COORD Coord;
    Coord.X = i;
    Coord.Y = j;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Coord);
#else
    printf("\033[%d;%dH", i, j);
#endif
}
