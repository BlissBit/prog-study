file(GLOB SOURCES "src/*.cpp")
file(GLOB HEADERS "*.hpp")


add_executable(multiplication-table ${SOURCES} ${HEADERS})

