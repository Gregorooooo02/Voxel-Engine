#ifndef VULKANLEARN_HELLOTRIANGLEAPP_H
#define VULKANLEARN_HELLOTRIANGLEAPP_H

#include <GLFW/glfw3.h>

const uint32_t WIDTH = 800;
const uint32_t HEIGHT = 600;

class HelloTriangleApp {
public:
    void run();
private:
    GLFWwindow* window;

    void initWindow();
    void initVulkan();
    void mainLoop();
    void cleanup();
};


#endif //VULKANLEARN_HELLOTRIANGLEAPP_H
