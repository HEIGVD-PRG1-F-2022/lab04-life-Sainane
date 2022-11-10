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

/**
 * Allow use of colored output in console for Windows
 */
void setWindowsConsoleToUTF8();

/**
 * clear console output
 */
void clearConsole();

/**
 * set console cursor position
 * @param i position of cursor from left to right
 * @param j position of cursor from top to bottom
 */
void setConsoleCursor(short i = 0, short j = 0);

/**
 * calculate new index in a specific direction for closed board [-1, -1] = [vectorSizeX-1, vectorSizeY-1]
 * @param vectorSizeX size x of vector
 * @param vectorSizeY size y of vector
 * @param x current x index
 * @param y current y index
 * @param dirX direction x of the new index
 * @param dirY direction y of the new index
 */
void calculateNewClosedCoord(unsigned long vectorSizeX, unsigned long vectorSizeY, unsigned long &x, unsigned long &y,
                             int dirX, int dirY);

void hideCursor();

#endif //LIFE_UTIL_H
