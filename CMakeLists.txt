cmake_minimum_required(VERSION 3.27)
project(VulkanLearn)

set(CMAKE_CXX_STANDARD 17)

file(GLOB_RECURSE SOURCE_FILES
    *.c
    *.cpp)

file(GLOB_RECURSE HEADER_FILES
    *.h
    *.hpp)

find_package(Vulkan REQUIRED)
find_package(glfw3 REQUIRED)

add_executable(VulkanLearn ${SOURCE_FILES} ${HEADER_FILES})

target_compile_definitions(VulkanLearn PRIVATE GLFW_INCLUDE_VULKAN)

target_link_libraries(VulkanLearn Vulkan::Vulkan)
target_link_libraries(VulkanLearn glfw)
