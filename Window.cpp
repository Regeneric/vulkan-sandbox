#include "headers/Window.hpp"

namespace vrc {
    Window::Window() : width{1280}, height{720}, name{"Vulkan App"} {initWindow();}
    Window::Window(string n) : width{1280}, height{720}, name{n} {initWindow();}
    Window::Window(int w, int h) : width{w}, height{h}, name{"Vulkan App"} {initWindow();}
    Window::Window(int w, int h, string n) : width{w}, height{h}, name{n} {initWindow();}
    Window::~Window() {
        glfwDestroyWindow(window);
        glfwTerminate();
    }


    void Window::initWindow() {
        glfwInit();

        glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);   // Disable OpenGL
        glfwWindowHint(GLFW_RESIZABLE , GLFW_FALSE);    // Disable resizing

        window = glfwCreateWindow(width, height, name.c_str(), nullptr, nullptr);    // Create Window window
    }
}