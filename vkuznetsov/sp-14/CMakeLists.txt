file(GLOB SOURCES "src/*.cpp")
file(GLOB HEADERS "*.hpp")


add_executable(distance-between-points ${SOURCES} ${HEADERS})
