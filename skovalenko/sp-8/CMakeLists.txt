file(GLOB SOURCES "src/*.cpp")
file(GLOB HEADERS "*.hpp")


add_executable(proizvedenie_cifr ${SOURCES} ${HEADERS})