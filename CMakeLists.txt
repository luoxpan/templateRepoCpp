cmake_minimum_required(VERSION 3.20.0)
set(CMAKE_CXX_STANDARD 11) #支持C++17
set(CAMKE_C_STANDARD 11)

# if (NOT CAMKE_BUILD_TYPE)
#     set(CMAKE_BUILD_TYPE Debug)
#     message("Setting default build type to Debug")
# endif()

project(my_project_name VERSION 0.0.1 LANGUAGES C CXX) #项目名

# include_directories(${PROJECT_SOURCE_DIR}/include)

add_subdirectory(./src)	

add_subdirectory(./test)
