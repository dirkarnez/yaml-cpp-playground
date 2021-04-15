cmake_minimum_required(VERSION 3.19)
set(CMAKE_CXX_STANDARD 11)

project(yaml-cpp-boilerplate)

set(YAML_CPP_ROOT "D:\\Code Projects\\Cpp Libraries\\yaml-cpp")

link_directories(
  ${YAML_CPP_ROOT}/build
)

add_executable(${PROJECT_NAME} main.cpp)

set(YAML_CPP_BUILD_TOOLS OFF)
set(YAML_CPP_BUILD_TESTS OFF)
set(YAML_BUILD_SHARED_LIBS OFF)

target_include_directories(${PROJECT_NAME}
    PRIVATE
      ${YAML_CPP_ROOT}/include)

target_link_libraries(${PROJECT_NAME}
  PRIVATE 
    debug yaml-cppd
    optimized yaml-cpp)
