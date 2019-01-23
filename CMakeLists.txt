cmake_minimum_required(VERSION 3.13)
project(anit_aircraft_base)

set(CMAKE_CXX_STANDARD 14)

add_executable(anit_aircraft_base main.cpp AM_Shield.cpp AM_Shield.h AA_35mm.cpp AA_35mm.h AA_80mm.cpp AA_80mm.h Radar.cpp Radar.h Gun.cpp Gun.h Manager.cpp Manager.h Recognition.cpp Recognition.h Menu.cpp Menu.h)