file(GLOB SOURCES "src/*.cpp")
file(GLOB HIDE_HEADERS "src/*.hpp")
file(GLOB HEADERS "*.hpp")


add_executable(example-recursion ${SOURCES} ${HEADERS})

