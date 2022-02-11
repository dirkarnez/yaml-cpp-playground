cmake_minimum_required(VERSION 3.19)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(yaml-cpp-boilerplate)

find_package(yaml-cpp 0.7.0 EXACT REQUIRED PATHS ${YAML_CPP_ROOT})

if (yaml-cpp_FOUND)
    message("yaml-cpp found")
else (yaml-cpp_FOUND)
    message("yaml-cpp not found")
endif()


add_executable(${PROJECT_NAME} 
    "src/main.cpp"
)

target_link_libraries(${PROJECT_NAME} yaml-cpp)

# target_link_libraries(${PROJECT_NAME}
#   PRIVATE yamlcpp)
  
#     # debug yaml-cppd
#     # optimized yaml-cpp)
