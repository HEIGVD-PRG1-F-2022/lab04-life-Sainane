/**
 * @author : Rachel Tranchida
 * @date : 02.11.2022
 * @file : userInterface
 * @project : Life
 */
#ifndef LIFE_USERINTERFACE_H
#define LIFE_USERINTERFACE_H

#include "cellsRepresentation.h"
#include <vector>
#include <iostream>
void userInterface(std::vector<std::vector<Cells>> &grid);
void showSelectionBoard(const std::vector<std::vector<Cells>> &grid, int &x, int &y);
void askUserPattern(std::vector<std::vector<Cells>> &grid);
#endif //LIFE_USERINTERFACE_H
