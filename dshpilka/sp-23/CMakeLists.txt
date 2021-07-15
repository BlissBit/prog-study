file(GLOB SOURCES "src/*.cpp")
file(GLOB HEADERS "*.hpp")

add_executable(Arithmetic_mean_of_an_array ${SOURCES} ${HEADERS})
