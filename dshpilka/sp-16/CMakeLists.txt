file(GLOB SOURCES "src/*.cpp")
file(GLOB HEADERS "*.hpp")

add_executable(zadachka_na_faktorizatsiyu_chisel ${SOURCES} ${HEADERS})
