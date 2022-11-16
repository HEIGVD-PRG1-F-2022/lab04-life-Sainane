/**
 * Contains a few const vector for known interesting patterns in game of life
 * @author : Rachel Tranchida
 * @date : 03.11.2022
 * @file : patterns
 * @project : Life
 */
#ifndef LIFE_PATTERNS_H
#define LIFE_PATTERNS_H

#include <vector>
#include "cellsRepresentation.h"

/**
 * Boat pattern, produce a constant figure that doesn't move, the cells don't die
 */
const std::vector<std::vector<Cells>> BOAT = {
        {Cells::ALIVE, Cells::ALIVE, Cells::DEAD},
        {Cells::ALIVE, Cells::DEAD,  Cells::ALIVE},
        {Cells::DEAD,  Cells::ALIVE, Cells::DEAD}
};

/**
 * Glider pattern, little spaceship that move indefinitely
 */
const std::vector<std::vector<Cells>> GLIDER = {
        {Cells::ALIVE, Cells::DEAD,  Cells::DEAD},
        {Cells::DEAD,  Cells::ALIVE, Cells::ALIVE},
        {Cells::ALIVE, Cells::ALIVE, Cells::DEAD}
};

/**
 * Glider gun pattern : pattern that generates glider
 */
const std::vector<std::vector<Cells>> GLIDER_GUN = {
        {Cells::DEAD,  Cells::DEAD,  Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD,  Cells::DEAD,  Cells::DEAD,  Cells::DEAD,  Cells::DEAD,  Cells::DEAD,  Cells::DEAD,  Cells::DEAD,  Cells::DEAD, Cells::DEAD, Cells::DEAD,  Cells::DEAD,  Cells::DEAD,  Cells::DEAD, Cells::ALIVE, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD,  Cells::DEAD},
        {Cells::DEAD,  Cells::DEAD,  Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD,  Cells::DEAD,  Cells::DEAD,  Cells::DEAD,  Cells::DEAD,  Cells::DEAD,  Cells::DEAD,  Cells::DEAD,  Cells::DEAD, Cells::DEAD, Cells::DEAD,  Cells::DEAD,  Cells::ALIVE, Cells::DEAD, Cells::ALIVE, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD,  Cells::DEAD},
        {Cells::DEAD,  Cells::DEAD,  Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD,  Cells::DEAD,  Cells::ALIVE, Cells::ALIVE, Cells::DEAD,  Cells::DEAD,  Cells::DEAD,  Cells::DEAD,  Cells::DEAD, Cells::DEAD, Cells::ALIVE, Cells::ALIVE, Cells::DEAD,  Cells::DEAD, Cells::DEAD,  Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::ALIVE, Cells::ALIVE},
        {Cells::DEAD,  Cells::DEAD,  Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD,  Cells::ALIVE, Cells::DEAD,  Cells::DEAD,  Cells::DEAD,  Cells::ALIVE, Cells::DEAD,  Cells::DEAD,  Cells::DEAD, Cells::DEAD, Cells::ALIVE, Cells::ALIVE, Cells::DEAD,  Cells::DEAD, Cells::DEAD,  Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::ALIVE, Cells::ALIVE},
        {Cells::ALIVE, Cells::ALIVE, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::ALIVE, Cells::DEAD,  Cells::DEAD,  Cells::DEAD,  Cells::DEAD,  Cells::DEAD,  Cells::ALIVE, Cells::DEAD,  Cells::DEAD, Cells::DEAD, Cells::ALIVE, Cells::ALIVE, Cells::DEAD,  Cells::DEAD, Cells::DEAD,  Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD,  Cells::DEAD},
        {Cells::ALIVE, Cells::ALIVE, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::ALIVE, Cells::DEAD,  Cells::DEAD,  Cells::DEAD,  Cells::ALIVE, Cells::DEAD,  Cells::ALIVE, Cells::ALIVE, Cells::DEAD, Cells::DEAD, Cells::DEAD,  Cells::DEAD,  Cells::ALIVE, Cells::DEAD, Cells::ALIVE, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD,  Cells::DEAD},
        {Cells::DEAD,  Cells::DEAD,  Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::ALIVE, Cells::DEAD,  Cells::DEAD,  Cells::DEAD,  Cells::DEAD,  Cells::DEAD,  Cells::ALIVE, Cells::DEAD,  Cells::DEAD, Cells::DEAD, Cells::DEAD,  Cells::DEAD,  Cells::DEAD,  Cells::DEAD, Cells::ALIVE, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD,  Cells::DEAD},
        {Cells::DEAD,  Cells::DEAD,  Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD,  Cells::ALIVE, Cells::DEAD,  Cells::DEAD,  Cells::DEAD,  Cells::ALIVE, Cells::DEAD,  Cells::DEAD,  Cells::DEAD, Cells::DEAD, Cells::DEAD,  Cells::DEAD,  Cells::DEAD,  Cells::DEAD, Cells::DEAD,  Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD,  Cells::DEAD},
        {Cells::DEAD,  Cells::DEAD,  Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD,  Cells::DEAD,  Cells::ALIVE, Cells::ALIVE, Cells::DEAD,  Cells::DEAD,  Cells::DEAD,  Cells::DEAD,  Cells::DEAD, Cells::DEAD, Cells::DEAD,  Cells::DEAD,  Cells::DEAD,  Cells::DEAD, Cells::DEAD,  Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD,  Cells::DEAD}
};

const std::vector<std::vector<Cells>> MAZING = {
        {Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::ALIVE, Cells::ALIVE, Cells::DEAD, Cells::DEAD},
        {Cells::DEAD, Cells::ALIVE, Cells::DEAD, Cells::ALIVE, Cells::DEAD, Cells::DEAD, Cells::DEAD},
        {Cells::ALIVE, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::ALIVE},
        {Cells::DEAD, Cells::ALIVE, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::ALIVE, Cells::ALIVE},
        {Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD},
        {Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::ALIVE, Cells::DEAD, Cells::ALIVE, Cells::DEAD},
        {Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::ALIVE, Cells::DEAD, Cells::DEAD}
};
#endif //LIFE_PATTERNS_H
