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
enum class Cells {DEAD, ALIVE};
void showEvolution(const std::vector<std::vector<Cells>> &grid);
std::ostream& operator<<(std::ostream& os, const Cells& cell);
std::ostream& operator<<(std::ostream& os, const std::vector<std::vector<Cells>> &grid);

#endif //LIFE_CELLSREPRESENTATION_H
