cmake_minimum_required(VERSION 3.22)

set (CMAKE_CXX_STANDARD 11)
set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")
message("C++ Standard: ${CMAKE_CXX_STANDARD}")
message("1: ${CMAKE_BINARY_DIR}")
message("2: ${PROJECT_BINARY_DIR}")
project(StringTokenize)
message("${CMAKE_BINARY_DIR}")
message("${PROJECT_BINARY_DIR}")

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}/bin")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}/bin")
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}/lib")


add_executable(string_tokenize  "${PROJECT_SOURCE_DIR}/main.cpp" "${PROJECT_SOURCE_DIR}/string_tokenize.cpp" "${PROJECT_SOURCE_DIR}/customer.cpp" )

target_include_directories(string_tokenize PUBLIC "${PROJECT_SOURCE_DIR}/")

install(TARGETS string_tokenize RUNTIME DESTINATION bin)
