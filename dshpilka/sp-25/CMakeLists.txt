file(GLOB SOURCES "src/*.cpp")
file(GLOB HEADERS "*.hpp")

add_executable(points_closest_to_each_other ${SOURCES} ${HEADERS})