file(GLOB SOURCES "src/*.cpp")
file(GLOB HEADERS "headers/*.hpp")

add_executable(vector-example ${SOURCES} ${HEADERS} "headers/Vectors.hpp" "src/Vector.cpp")
