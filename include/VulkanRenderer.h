#pragma once

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>
#include <string>

class VulkanRenderer {
public:
    VulkanRenderer();
    void initialize();
    void cleanup();
    void drawFrame();
    bool windowShouldClose();

private:
    GLFWwindow* window;
    VkInstance instance;
    
    void initWindow();
    void createInstance();
};