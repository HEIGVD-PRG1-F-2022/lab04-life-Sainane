/**
 * @author : Rachel Tranchida
 * @date : 02.11.2022
 * @file : gameOfLife
 * @project : Life
 */
#ifndef LIFE_GAMEOFLIFE_H
#define LIFE_GAMEOFLIFE_H

#include "lifeAlgorithms.h"
#include "cellsRepresentation.h"
#include <vector>


void playGameOfLife();

/**
 * copy a vector of cells (predefined patterns) to a preexisting grid
 * @param grid the grid of cells
 * @param pattern the grid containing the pattern
 * @param posX starting position x where we want to insert the pattern
 * @param posY starting position x where we want to insert the pattern
 */
void addStructure(std::vector<std::vector<Cells>> &grid, const std::vector<std::vector<Cells>> &pattern,
                  unsigned long posX = 0, unsigned long posY = 0);

#endif //LIFE_GAMEOFLIFE_H
