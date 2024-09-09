#pragma once

#include "VulkanRenderer.h"

class Game {
public:
    Game();
    void run();

private:
    VulkanRenderer renderer;
    void gameLoop();
    void update();
    void render();
};