#pragma once
#include "Weapon.hpp"
#include "SDL3/SDL_render.h"

class Window;
struct Position {
    float m_posX{0};
    float m_posY{0};
};
class Spaceship{
    public:
        Spaceship() = default;
        virtual ~Spaceship() = default;
        virtual void update(Window& window) = 0;
        virtual void render(Window& window) = 0;
    protected:
        Position position;
        float speed{0.0f};
        float hitBox_width{0.0f};
        float hitBox_height{0.0f};
        int id{0};
        int hp{1};
        int maxHp{1};
        Weapon type;
        SDL_Texture* texture{nullptr};
};