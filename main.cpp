// STL
#include <iostream>
#include <stdexcept>
#include <cstdlib>

// App
#include "headers/App.hpp"


int main() {
    vrc::App vulkan;

    try {
        vulkan.run();
    } catch(const std::exception &e) {
        std::cerr << e.what() << std::endl;
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}