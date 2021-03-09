file(GLOB SOURCES "src/*.cpp")
file(GLOB HEADERS "*.hpp")


add_executable(Leap-No-Leap-Year ${SOURCES} ${HEADERS})
