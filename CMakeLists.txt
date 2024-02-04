cmake_minimum_required(VERSION 3.27)
project(VulkanLearn)

set(CMAKE_CXX_STANDARD 17)

find_package(Vulkan REQUIRED)

add_executable(VulkanLearn main.cpp
)

target_link_libraries(VulkanLearn Vulkan::Vulkan)
