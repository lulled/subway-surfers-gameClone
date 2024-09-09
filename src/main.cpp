#include "../include/Game.h"
#include <iostream>  // Add this line
#include <exception>  // Add this line for std::exception

int main() {
    try {
        Game game;
        game.run();
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}