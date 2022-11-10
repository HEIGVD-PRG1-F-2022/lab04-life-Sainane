/**
 * @author : Rachel Tranchida
 * @date : 02.11.2022
 * @file : userInterface3
 * @project : Life
 */
#ifndef LIFE_USERINTERFACE_H
#define LIFE_USERINTERFACE_H

#include "cellsRepresentation.h"
#include <vector>
#include <iostream>


void userInterface3(std::vector<std::vector<Cells>> &grid, bool &adaptativeGrid);

int menu(const std::string &title, const std::string &description, const std::vector<std::string> &options);

void showSelectionBoard(const std::vector<std::vector<Cells>> &grid, unsigned long &x, unsigned long &y);

void startingScreen();

bool userDrawGrid(std::vector<std::vector<Cells>> &grid);

bool selectPattern(std::vector<std::vector<Cells>> &grid);

void userInterface(std::vector<std::vector<Cells>> &grid, bool &adaptativeGrid);

#endif //LIFE_USERINTERFACE_H
