cmake_minimum_required(VERSION 4.0.1)
project(DataStructures)

# Set C++ standard
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)


file(GLOB HEADERS include/*.hpp)
file(GLOB SOURCES src/*.cpp)

add_executable(DataStructures main.cpp ${INCLUDE} ${SOURCES})

set_target_properties(DataStructures PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
)
