#pragma once
#include "Spaceship.hpp"

#include <SDL3/SDL_keyboard.h>

class Player : public Spaceship {
public:
    Player();

    ~Player() override;
    void render(Window& window) override;
    void update(Window& window) override;
    void moveCharacter(Window& window);
private:
    static int nextId;


protected:
    int exPoints{0};
    int maxEXP{1};
};
