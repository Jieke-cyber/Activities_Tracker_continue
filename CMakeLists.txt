cmake_minimum_required(VERSION 3.27)
project(Activities_Tracker)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(test)

find_package(Curses REQUIRED)
include_directories(${CURSES_INCLUDE_DIR})
set(SOURCE_FILE Activities_description.cpp
        Activities_description.h
        Day_activities.cpp
        Day_activities.h
        Time.cpp
        Time.h)
add_executable(Activities_Tracker main.cpp)
add_library(core ${SOURCE_FILE})
target_link_libraries(Activities_Tracker core ${CURSES_LIBRARIES})