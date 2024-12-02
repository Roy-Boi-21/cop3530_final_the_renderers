cmake_minimum_required(VERSION 3.27)
project(Projects)

set(CMAKE_CXX_STANDARD 17)

#set(SFML_DIR "C:/Libraries/SFML-2.5.1/lib/cmake/SFML")
set(SFML_DIR "C:/SFML/lib/cmake/SFML")
#set(SFML_STATIC_LIBRARIES TRUE)
find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)
include_directories(c:/SFML/include/SFML)

add_executable(Projects main.cpp
        triangle.cpp
        triangle.h
        scene.cpp
        scene.h
        ray_tracing.cpp
        ray_tracing.h
        ray_tracing.h
        rasterization.cpp
        rasterization.h)
add_library(ray_tracing ray_tracing.h
        ray_tracing.cpp)
target_link_libraries(ray_tracing sfml-graphics sfml-audio)
target_link_libraries(Projects sfml-graphics sfml-audio)