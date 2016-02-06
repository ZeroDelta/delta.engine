cmake_minimum_required(VERSION 3.4.1)

set(CMAKE_CXX_FLAGS "-std=c++11 -stdlib=libc++")
set(CMAKE_EXE_LINKER_FLAGS "-stdlib=libc++")
set( CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin )

project(deltaengine)

include_directories(delta.engine/includes)

file(GLOB SOURCES "delta.engine/src/*.cpp")

add_executable(deltaengine ${SOURCES})

install(TARGETS deltaengine DESTINATION bin)
