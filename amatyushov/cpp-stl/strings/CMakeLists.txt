file(GLOB SOURCES "src/*.cpp")
file(GLOB HEADERS "*.hpp")


add_executable(example-stl-strings ${SOURCES} ${HEADERS})
