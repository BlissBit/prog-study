file(GLOB SOURCES "src/*.cpp")
file(GLOB HEADERS "*.hpp")

add_executable(Multiplicity ${SOURCES} ${HEADERS})