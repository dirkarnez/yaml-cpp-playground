cmake_minimum_required(VERSION 3.19)
set (CMAKE_CXX_STANDARD 11)
project(yaml-cpp-boilerplate)


# Build yaml-cpp version 0.6.2
include(ExternalProject)

ExternalProject_Add(yaml-cpp-062
  SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/yaml-cpp
  BINARY_DIR ${CMAKE_CURRENT_SOURCE_DIR}/yaml-cpp/build
  CMAKE_ARGS
    -DYAML_CPP_BUILD_TESTS=OFF
    -Wno-dev
)

set(headers
  ${CMAKE_CURRENT_SOURCE_DIR}/yaml-cpp/include/
)

set(libraries
  ${CMAKE_CURRENT_SOURCE_DIR}/yaml-cpp/build/Debug/yaml-cppd.lib
)

include_directories(${headers})
add_executable(${PROJECT_NAME} main.cpp)
target_link_libraries(${PROJECT_NAME} ${libraries})