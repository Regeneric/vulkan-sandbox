#pragma once

#include "Window.hpp"

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

#include <vector>

namespace vrc {
    class Device {
    public:
        #ifdef NDEBUG
            const bool enableValidationLayers = false;
        #else
            const bool enableValidationLayers = true;
        #endif

        Device(Window &window);
        ~Device();
    private:
        Window &_window;

        void createInstance();
        VkInstance instance;
        VkDebugUtilsMessengerEXT debugMessenger;


        std::vector<const char*> getRequiredExtensions();
        bool checkValidationLayerSupport();
        const std::vector<const char*> validationLayers = {"VK_LAYER_KHRONOS_validation"};

        void populateDebugMessengerCreateInfo(VkDebugUtilsMessengerCreateInfoEXT &createInfo);
        void setupDebugMessenger();
    };
}