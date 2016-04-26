cmake_minimum_required(VERSION 3.0)
project(ThousandDaysAndADay C CXX)


#Set the directory which contains our "helper files" for finding external libraries
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${ThousandDaysAndADay_SOURCE_DIR}/cmake")
set(BIN_DIR ${ThousandDaysAndADay_SOURCE_DIR}/bin)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)


#Find SDL2, our core window library
find_package(SDL2 REQUIRED)
include_directories(${SDL2_INCLUDE_DIR})

#Find SDL2_TTF, an extension for SDL2 that allows us to use TTF fonts
find_package(SDL2_ttf REQUIRED)
include_directories(${SDL2_TTF_INCLUDE_DIR})

#Find SDL2_Image, another SDL2 extension; this one makes displaying images easier
find_package(SDL2_image REQUIRED)
include_directories(${SDL2_IMAGE_INCLUDE_DIR})

#Include all files in the /include directory (our .h files)
include_directories(include)



#Add our code to the project
add_executable(ThousandDaysAndADay src/main.cpp src/WindowManager.cpp src/EventManager.cpp lib/pugixml.cpp)



#Link the found libraries
target_link_libraries(ThousandDaysAndADay ${SDL2_LIBRARY} ${SDL2_TTF_LIBRARY} ${SDL2_IMAGE_LIBRARY})


#Put the compiled application in /bin
install(TARGETS ThousandDaysAndADay RUNTIME DESTINATION ${BIN_DIR})
