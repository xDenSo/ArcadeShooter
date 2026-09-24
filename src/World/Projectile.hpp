#pragma once
#include "GeneralData.hpp"
#include "SDL3/SDL_render.h"
#include "../Window.hpp"

class Window;

class Projectile {
public:
    explicit Projectile(Position playerPosition, SDL_Texture* texture);
    ~Projectile() = default;
    Position getPosition() const;
    void setPosition(Position position);
    void update(Window& window);
    void render(const Window& window) const;
    bool isOffScreen() const;


protected:
    HitBox m_hitbox;
    Position m_Position;
    Size size;
    SDL_Texture* texture{nullptr};
    float speed;
};


