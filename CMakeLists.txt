cmake_minimum_required(VERSION 3.23)
project(Lab2)

set(SOURCES
        main.cpp
        src/Service/DisplayService/ConsoleDisplayService.cpp
        src/Service/DisplayService/DisplayServiceInterface.h
        src/Service/DisplayService/ConsoleDisplayService.h
        src/App.cpp
        src/Service/FileService/FileWriter.cpp)
add_executable(${PROJECT_NAME} ${SOURCES})