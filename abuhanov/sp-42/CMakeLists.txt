file(GLOB SOURCES "src/*.cpp")
file(GLOB HEADERS "*.hpp")


add_executable(even-odd-digits ${SOURCES} ${HEADERS})
