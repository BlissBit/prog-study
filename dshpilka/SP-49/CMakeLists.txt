file(GLOB SOURCES "src/*.cpp")
file(GLOB HEADERS "*.hpp")

add_executable(Loan-payments ${SOURCES} ${HEADERS})
