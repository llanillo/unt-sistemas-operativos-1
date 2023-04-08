cmake_minimum_required(VERSION 3.24)
project(Sistemas_Operativos)

set(CMAKE_CXX_STANDARD 17)

# Search all the .cpp files and add them to a variable
file(GLOB_RECURSE SOURCE_FILES TP1)
add_executable(${PROJECT_NAME} TP1/TP1-Punto6.c ${SOURCE_FILES})
