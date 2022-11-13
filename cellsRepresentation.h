/**
 * Functions and enum for Cells display and representation
 * @author : Rachel Tranchida
 * @date : 02.11.2022
 * @file : cellsRepresentation
 * @project : Life
 */
#ifndef LIFE_CELLSREPRESENTATION_H
#define LIFE_CELLSREPRESENTATION_H

#include <vector>
#include <iostream>

enum class Cells {
    DEAD, ALIVE
};


/**
 * print the grid of cells
 * @param grid grid of cells
 */
void showEvolution(const std::vector<std::vector<Cells>> &grid);

/**
 * convert a grid of cells to a single string, allow for faster printing in console
 * @param grid the grid of cells
 * @return the string representing the grid of cells
 */
std::string gridCellsToString(const std::vector<std::vector<Cells>> &grid);

#endif //LIFE_CELLSREPRESENTATION_H
