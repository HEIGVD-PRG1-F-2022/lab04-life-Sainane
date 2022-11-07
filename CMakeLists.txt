cmake_minimum_required(VERSION 3.23)
project(Life)

set(CMAKE_CXX_STANDARD 20)

add_executable(Life main.cpp config.h lifeAlgorithms.cpp lifeAlgorithms.h gameOfLife.cpp gameOfLife.h userInterface.cpp userInterface.h util.cpp util.h cellsRepresentation.h cellsReprensetation.cpp patterns.h)