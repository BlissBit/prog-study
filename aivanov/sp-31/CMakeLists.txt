file(GLOB SOURCES "src/*.cpp")
file(GLOB HEADERS "*.hpp")


add_executable(swap-variable ${SOURCES} ${HEADERS})

