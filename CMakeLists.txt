cmake_minimum_required(VERSION 4.0.1)
project(DataStructures)

# Set C++ standard
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

Include(FetchContent)

FetchContent_Declare(
  Catch2
  GIT_REPOSITORY https://github.com/catchorg/Catch2.git
  GIT_TAG        v3.4.0 # or a later release
)

FetchContent_MakeAvailable(Catch2)

file(GLOB HEADERS include/*.hpp)
file(GLOB SOURCES src/*.cpp)
file(GLOB TESTS tests/*.cpp)

add_executable(DataStructures ${TESTS} ${INCLUDE} ${SOURCES})
target_link_libraries(DataStructures PRIVATE Catch2::Catch2WithMain)

set_target_properties(DataStructures PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
)
