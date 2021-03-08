file(GLOB SOURCES "src/*.cpp")
file(GLOB HEADERS "*.hpp")


add_executable(poisk_chisel ${SOURCES} ${HEADERS})