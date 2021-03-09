file(GLOB SOURCES "src/*.cpp")
file(GLOB HEADERS "*.hpp")


add_executable(Leap-Year ${SOURCES} ${HEADERS})
