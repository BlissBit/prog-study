file(GLOB SOURCES "src/*.cpp")
file(GLOB HEADERS "*.hpp")

add_executable(zadacha_na_proverku_kratnosti ${SOURCES} ${HEADERS})
