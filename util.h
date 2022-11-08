/**
 * @author : Rachel Tranchida
 * @date : 02.11.2022
 * @file : util
 * @project : Life
 */
#ifndef LIFE_UTIL_H
#define LIFE_UTIL_H
#ifdef _WIN32

#include "windows.h"
#else
#include <cstdlib>
#include <unistd.h>
#endif
void setWindowsConsoleToUTF8();
void clearConsole();
void setConsoleCursor(int i = 0, int j = 0);
void calculateNewClosedCoord(int vectorSizeX, int vectorSizeY, int &x, int &y, int dirX, int dirY);
#endif //LIFE_UTIL_H
