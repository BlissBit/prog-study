# CMakeList .txt : Top-level CMake project file, do global configuration
# and include sub-projects here.
#
cmake_minimum_required(VERSION 3.8)

project(prog-study VERSION 1.0.0)

set(CXX_STANDARD 17)

# Include sub-projects.
add_subdirectory(amatyushov)
add_subdirectory(aivanov)
add_subdirectory(vkuznetsov)
add_subdirectory(dlobuzov)
add_subdirectory(dshpilka)
add_subdirectory(abuhanov)