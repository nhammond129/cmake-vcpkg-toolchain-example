cmake_minimum_required(VERSION 3.10)

set(CMAKE_TOOLCHAIN_FILE ${CMAKE_CURRENT_SOURCE_DIR}/vcpkg/scripts/buildsystems/vcpkg.cmake CACHE STRING "Vcpkg toolchain file")
project(test)

message(STATUS "CMAKE_TOOLCHAIN_FILE = \"${CMAKE_TOOLCHAIN_FILE}\"")
message(STATUS "CMAKE_PREFIX_PATH = \"${CMAKE_PREFIX_PATH}\"")

message(STATUS "Finding packages...")
find_package(SDL2 CONFIG REQUIRED) # must be listed in vcpkg.json manifest to auto-install via vcpkg

# c++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# add the executable
add_executable(${PROJECT_NAME} src/main.cpp)
target_link_libraries(${PROJECT_NAME} PRIVATE SDL2::SDL2main SDL2::SDL2)
