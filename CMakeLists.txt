cmake_minimum_required(VERSION 3.10)

# set the project name
set(CMAKE_TOOLCHAIN_FILE ${CMAKE_CURRENT_SOURCE_DIR}/vcpkg/scripts/buildsystems/vcpkg.cmake
  CACHE STRING "Vcpkg toolchain file")
project(test)

# deps
find_package(SFML 2.4.2 REQUIRED system window graphics)

include_directories(${SFML_INCLUDE_DIR})

# c++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# add the executable
add_executable(${PROJECT_NAME} src/main.cpp)
target_link_libraries(${PROJECT_NAME} ${SFML_LIBRARIES})