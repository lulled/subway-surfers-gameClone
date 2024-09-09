#include "../include/Game.h"
#include <iostream>

Game::Game() : renderer() {}

void Game::run() {
    renderer.initialize();
    gameLoop();
    renderer.cleanup();
}

void Game::gameLoop() {
    while (!renderer.windowShouldClose()) {
        update();
        render();
    }
}

void Game::update() {
    // Update game state
}

void Game::render() {
    renderer.drawFrame();
}