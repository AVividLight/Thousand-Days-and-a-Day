cmake_minimum_required(VERSION 3.0)
project(ThousandDaysAndADay C CXX)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${ThousandDaysAndADay_SOURCE_DIR}/cmake")
set(BIN_DIR ${ThousandDaysAndADay_SOURCE_DIR}/bin)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

#file(COPY resources DESTINATION ${CMAKE_CURRENT_BINARY_DIR})

include_directories(include)
add_executable(ThousandDaysAndADay src/main.cpp lib/pugixml.cpp)

install(TARGETS ThousandDaysAndADay RUNTIME DESTINATION ${BIN_DIR})
