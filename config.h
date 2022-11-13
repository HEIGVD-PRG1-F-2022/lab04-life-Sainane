/**
 * constants used in the program
 * @author : Rachel Tranchida
 * @date : 01.11.2022
 * @file : config
 * @project : Life
 */
#ifndef LIFE_CONFIG_H
#define LIFE_CONFIG_H
#define DEAD_CELL_DISPLAY "\x1b[38;2;0;0;0m ■\x1b[0m"
#define ALIVE_CELL_DISPLAY "\x1b[38;2;255;255;255m ■\x1b[0m"

//simulation preset
const unsigned long GRID_SIZE_X = 40;
const unsigned long GRID_SIZE_Y = 40;
const int EVOLUTION_NUMBER = 1000;

//user interface command
const char UP = 'w';
const char DOWN = 's';
const char RIGHT = 'd';
const char START = 'e';
const char LEFT = 'a';
const char CHANGE_CELL_STATE = 'q';

//Title of the game in ascii style
const std::string TITLE = "\n"
                          " ██████╗  █████╗ ███╗   ███╗███████╗     ██████╗ ███████╗    ██╗     ██╗███████╗███████╗\n"
                          "██╔════╝ ██╔══██╗████╗ ████║██╔════╝    ██╔═══██╗██╔════╝    ██║     ██║██╔════╝██╔════╝\n"
                          "██║  ███╗███████║██╔████╔██║█████╗      ██║   ██║█████╗      ██║     ██║█████╗  █████╗  \n"
                          "██║   ██║██╔══██║██║╚██╔╝██║██╔══╝      ██║   ██║██╔══╝      ██║     ██║██╔══╝  ██╔══╝  \n"
                          "╚██████╔╝██║  ██║██║ ╚═╝ ██║███████╗    ╚██████╔╝██║         ███████╗██║██║     ███████╗\n"
                          " ╚═════╝ ╚═╝  ╚═╝╚═╝     ╚═╝╚══════╝     ╚═════╝ ╚═╝         ╚══════╝╚═╝╚═╝     ╚══════╝\n";

#endif //LIFE_CONFIG_H
