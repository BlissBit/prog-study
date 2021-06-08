file(GLOB SOURCES "src/*.cpp")
file(GLOB HEADERS "*.hpp")

add_executable(zadacha_na_faktorizatsiyu_chisla ${SOURCES} ${HEADERS})
