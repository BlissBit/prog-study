file(GLOB SOURCES "src/*.cpp")
file(GLOB HEADERS "*.hpp")


add_executable(example-adresses ${SOURCES} ${HEADERS})

