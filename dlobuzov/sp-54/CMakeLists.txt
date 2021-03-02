file(GLOB SOURCES "src/*.cpp")
file(GLOB HEADERS "*.hpp")


add_executable(sum-numbers-of-number ${SOURCES} ${HEADERS})
