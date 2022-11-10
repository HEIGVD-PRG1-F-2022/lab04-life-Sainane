/**
 * @author : Rachel Tranchida
 * @date : 02.11.2022
 * @file : lifeAlgorithms
 * @project : Life
 */
#ifndef LIFE_LIFEALGORITHMS_H
#define LIFE_LIFEALGORITHMS_H

#include <vector>
#include "cellsRepresentation.h"


void adaptGrid(std::vector<std::vector<Cells>> &grid);

/**
 * Count the number of neighbours around a spcific cell
 * @param grid grid of cells
 * @param x x coordinate of cell
 * @param y y coordinate of cell
 * @return number of cells around cell at position (x, y)
 */
int countNeighbours(const std::vector<std::vector<Cells>> &grid, int x, int y);

/**
 * Check if there is a neighbour in a specific direction from the cell we consider
 * @param grid grid of cells
 * @param x x coordinate of cell
 * @param y y coordinate of cell
 * @param dirX direction on the x axis we want to count (-1, 0 or 1)
 * @param dirY direction on the y axis we want to count (-1, 0 or 1)
 * @return true if there is a neighbour, false otherwise
 */
bool hasNeighbour(const std::vector<std::vector<Cells>> &grid, unsigned long x, unsigned long y, int dirX, int dirY);

/**
 * update the grid to the next generation
 * @param grid grid of cells
 */
void evolution(std::vector<std::vector<Cells>> &grid);

#endif //LIFE_LIFEALGORITHMS_H
