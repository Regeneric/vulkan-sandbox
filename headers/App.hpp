#pragma once

#include "Window.hpp"
#include "Device.hpp"

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

namespace vrc {
    class App {
    public:
        static constexpr uint32_t WIDTH  = 800;
        static constexpr uint32_t HEIGHT = 600;

        App() {}
        ~App() {}

        void run();
    private:
        Window window{WIDTH, HEIGHT, "Vulkan App"};
        Device device{window};
    };
}