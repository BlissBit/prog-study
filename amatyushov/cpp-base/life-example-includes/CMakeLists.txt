file(GLOB SOURCES "src/*.cpp")
file(GLOB HEADERS "src/*.hpp")


add_executable(example-includes ${SOURCES} ${HEADERS})
