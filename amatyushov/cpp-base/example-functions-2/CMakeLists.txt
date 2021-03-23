file(GLOB SOURCES "src/*.cpp")
file(GLOB HIDE_HEADERS "src/*.hpp")
file(GLOB HEADERS "*.hpp")


add_executable(example-functions-2 ${SOURCES} ${HEADERS}  "src/task_3.hpp" "src/task_3.cpp")

