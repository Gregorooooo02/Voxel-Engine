cmake_minimum_required(VERSION 3.27)
project(VulkanLearn)

set(CMAKE_CXX_STANDARD 17)

add_executable(VulkanLearn main.cpp
    src/HelloTriangleApp.cpp
    lib/HelloTriangleApp.h)

find_package(glfw3 3.3 REQUIRED)
find_package(Vulkan REQUIRED)

target_compile_definitions(VulkanLearn PRIVATE GLFW_INCLUDE_VULKAN)

target_link_libraries(VulkanLearn Vulkan::Vulkan)
target_link_libraries(VulkanLearn glfw)
