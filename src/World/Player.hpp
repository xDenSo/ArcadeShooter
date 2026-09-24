#pragma once
#include "Spaceship.hpp"


class Player : public Spaceship {
public:
    Player();
    ~Player() override;
    void render(Window& window) override;
    void update(Window& window) override;
    void moveCharacter(Window& window);
    Position getPosition() override;
    void setPosition(Position position) override;
    void shoot(Position position);
    void setProjectileTexture(SDL_Texture* texture);
private:
    static int nextId;


protected:
    int exPoints{0};
    int maxEXP{1};

};
