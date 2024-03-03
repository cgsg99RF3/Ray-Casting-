cmake_minimum_required(VERSION 3.26)
project(first_try)

set(CMAKE_CXX_STANDARD 20)

find_package(
        SFML 2.5 COMPONENTS window graphics system REQUIRED
)
include_directories(include /opt/homebrew/include/)
add_executable(first_try main.cpp)
add_subdirectory(src)
target_link_libraries(first_try Map
        sfml-graphics
)