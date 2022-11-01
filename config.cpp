/**
 * @author : Rachel Tranchida
 * @date : 01.11.2022
 * @file : config
 * @project : Life
 */
#include <string>
#include "config.h"
#ifdef _WIN32

#include "windows.h"

#endif

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

void setConsoleCursorToStart() {
#ifdef _WIN32
    COORD Coord;
    Coord.X = 0;
    Coord.Y = 0;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Coord);
#else
    printf("\033[%d;%dH", 0+1, 0+1);
#endif
}