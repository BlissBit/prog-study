file(GLOB SOURCES "src/*.cpp")
file(GLOB HEADERS "*.hpp")


add_executable(counting-even-numbers ${SOURCES} ${HEADERS})