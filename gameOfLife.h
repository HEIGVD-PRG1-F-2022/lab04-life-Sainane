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

void playGame();
void addStructure(std::vector<std::vector<Cells>> &grid, const std::vector<std::vector<Cells>> &pattern, unsigned long posX, unsigned long posY);
#endif //LIFE_GAMEOFLIFE_H
