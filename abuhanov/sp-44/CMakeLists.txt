file(GLOB SOURCES "src/*.cpp")
file(GLOB HEADERS "*.hpp")


add_executable(Leap-Not-Leap-Year ${SOURCES} ${HEADERS})
