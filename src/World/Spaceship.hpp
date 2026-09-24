#pragma once
#include "GeneralData.hpp"
#include "Weapon.hpp"
#include "SDL3/SDL_render.h"

class Window;


class Spaceship{
    public:
        Spaceship() = default;
        virtual ~Spaceship() = default;
        virtual void update(Window& window) = 0;
        virtual void render(Window& window) = 0;
        virtual Position getPosition() = 0;
        virtual void setPosition(Position pos) = 0;
    protected:
        Size size;
        Position position;
        HitBox hitBox;
        float speed{0.0f};
        int id{0};
        int hp{1};
        int maxHp{1};
        Weapon type;
        SDL_Texture* texture{nullptr};
};