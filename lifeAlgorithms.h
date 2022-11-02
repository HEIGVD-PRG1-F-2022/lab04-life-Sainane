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

int countNeighbours(const std::vector<std::vector<Cells>> &grid, int i, int j);
bool hasNeighbour(const std::vector<std::vector<Cells>> &grid, int i, int j, int dirX, int dirY);
void evolution(std::vector<std::vector<Cells>> &grid);
#endif //LIFE_LIFEALGORITHMS_H
