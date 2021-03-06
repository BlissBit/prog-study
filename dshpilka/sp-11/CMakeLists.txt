file(GLOB SOURCES "src/*.cpp")
file(GLOB HEADERS "*.hpp")

add_executable(is-a-natural-number-general ${SOURCES} ${HEADERS})