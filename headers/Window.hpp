#pragma once

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

#include <string>

namespace vrc {
    using std::string;
    class Window {
    public:
        Window();
        Window(string n);
        Window(int w, int h);
        Window(int w, int h, string n);
        ~Window();

        // Remove copy constructor and operator
        Window(const Window &) = delete;
        Window &operator=(const Window &) = delete;

        inline bool shouldClose() {return glfwWindowShouldClose(window);}
    private:
        void initWindow();

        string name;
        int width;
        int height;

        GLFWwindow *window;
    };
}