cmake_minimum_required(VERSION 3.6)
project(elaborato)
add_subdirectory(test)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Subject.h Observer.h Cell.cpp Cell.h Formula.cpp Formula.h Sum.cpp Sum.h Max.cpp Max.h Min.cpp Min.h Mean.cpp Mean.h)
find_package(Qt5Widgets REQUIRED)

add_executable(elaborato ${SOURCE_FILES})
target_link_libraries(elaborato Qt5::Widgets)