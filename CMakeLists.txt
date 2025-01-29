cmake_minimum_required(VERSION 3.15.0)
project(MOSFETcalc VERSION 0.1.0 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(MOSFETcalc main.cpp Menu.cpp MOSFETProfile.cpp InputParams.cpp)

