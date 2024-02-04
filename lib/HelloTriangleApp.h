#ifndef VULKANLEARN_HELLOTRIANGLEAPP_H
#define VULKANLEARN_HELLOTRIANGLEAPP_H

#include "vulkan/vulkan.h"

#include <GLFW/glfw3.h>

#include <stdexcept>
#include <vector>

const uint32_t WIDTH = 800;
const uint32_t HEIGHT = 600;

class HelloTriangleApp {
public:
    void run();
private:
    GLFWwindow* window;
    VkInstance instance;

    void initWindow();
    void initVulkan();
    void mainLoop();
    void cleanup();

    void createInstance();
};


#endif //VULKANLEARN_HELLOTRIANGLEAPP_H
