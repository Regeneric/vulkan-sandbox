#include "headers/App.hpp"

namespace vrc {
    void App::run() {
        while(!window.shouldClose()) {
            glfwPollEvents();
        }
    }
}