/**
 * Functions related to user interface
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

/**
 * Present the user with a list of options to choose from
 * @param title string to pass for a title to print before the menu
 * @param description description of what the user is asked to choose
 * @param options vector of options the user can choose from
 * @return the options de user chose (index in vector option)
 */
int menu(const std::string &title, const std::string &description, const std::vector<std::string> &options);

/**
 * show the board that the user will modify with the current selected cell
 * @param grid the grid of cells
 * @param x the x position of the current selected cell
 * @param y the y position of the current selected cell
 */
void showSelectionBoard(const std::vector<std::vector<Cells>> &grid, unsigned long &x, unsigned long &y);

/**
 * allow the user to modify the grid of cells
 * @param grid the grid of cells
 */
void userDrawGrid(std::vector<std::vector<Cells>> &grid);

/**
 * allow the user to select from preexisting patterns
 * @param grid
 */
void selectPattern(std::vector<std::vector<Cells>> &grid);

/**
 * userInterface for the game, allow for the user to initialise the grid and choose the type of grid (adaptative or fixed)
 * @param grid the grid of cells
 * @param adaptativeGrid is the grid adaptative
 */
void userInterface(std::vector<std::vector<Cells>> &grid, bool &adaptativeGrid);

#endif //LIFE_USERINTERFACE_H
