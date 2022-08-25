cmake_minimum_required(VERSION 3.23)
project(GenericArray)

set(CMAKE_CXX_STANDARD 14)

add_executable(GenericArray main.cpp coordenada.h genericArray.h Utiles.h genericArray.cpp coordenada.cpp)
