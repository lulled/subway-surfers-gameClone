cmake_minimum_required(VERSION 3.10)
project(SubwaySurfersClone)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Vulkan REQUIRED)
find_package(glfw3 3.3 REQUIRED)

add_executable(SubwaySurfersClone 
    src/main.cpp
    src/Game.cpp
    src/VulkanRenderer.cpp
)

target_include_directories(SubwaySurfersClone PRIVATE include)
target_link_libraries(SubwaySurfersClone PRIVATE Vulkan::Vulkan glfw)