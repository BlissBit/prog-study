file(GLOB SOURCES "src/*.cpp")
file(GLOB HEADERS "*.hpp")

add_executable(posledovatelnost_Fibonachchi ${SOURCES} ${HEADERS})
