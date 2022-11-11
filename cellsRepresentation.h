/**
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

#endif //LIFE_CELLSREPRESENTATION_H
