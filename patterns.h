/**
 * @author : Rachel Tranchida
 * @date : 03.11.2022
 * @file : patterns
 * @project : Life
 */
#ifndef LIFE_PATTERNS_H
#define LIFE_PATTERNS_H
#include <vector>
#include "cellsRepresentation.h"


const  std::vector<std::vector<Cells>> BOAT = {{Cells::ALIVE, Cells::ALIVE, Cells::DEAD},
                                     {Cells::ALIVE, Cells::DEAD, Cells::ALIVE},
                                     {Cells::DEAD, Cells::ALIVE, Cells::DEAD}
};
const  std::vector<std::vector<Cells>> GLIDER = {{Cells::ALIVE, Cells::DEAD, Cells::DEAD},
                                       {Cells::DEAD, Cells::ALIVE, Cells::ALIVE},
                                       {Cells::ALIVE, Cells::ALIVE, Cells::DEAD}
};


const std::vector<std::vector<Cells>> GLIDER_GUN = {
        {Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::ALIVE, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD},
        {Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::ALIVE, Cells::DEAD, Cells::ALIVE, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD},
        {Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::ALIVE, Cells::ALIVE, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::ALIVE, Cells::ALIVE, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::ALIVE, Cells::ALIVE},
        {Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::ALIVE, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::ALIVE, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::ALIVE, Cells::ALIVE, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::ALIVE, Cells::ALIVE},
        {Cells::ALIVE, Cells::ALIVE, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::ALIVE, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::ALIVE, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::ALIVE, Cells::ALIVE, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD},
        {Cells::ALIVE, Cells::ALIVE, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::ALIVE, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::ALIVE, Cells::DEAD, Cells::ALIVE, Cells::ALIVE, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::ALIVE, Cells::DEAD, Cells::ALIVE, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD},
        {Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::ALIVE, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::ALIVE, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::ALIVE, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD},
        {Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::ALIVE, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::ALIVE, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD},
        {Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::ALIVE, Cells::ALIVE, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD, Cells::DEAD}
};
#endif //LIFE_PATTERNS_H
