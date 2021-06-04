file(GLOB SOURCES "src/*.cpp")
file(GLOB HEADERS "*.hpp")

add_executable(Factoring-a-number ${SOURCES} ${HEADERS})