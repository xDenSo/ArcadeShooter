#include "Speedster.hpp"
#include "GeneralData.hpp"

#include "SDL3_image/SDL_image.h"

Speedster::Speedster(Position position, SDL_Texture* texture) {
    this->maxHp = 100;
    this->hp = this->maxHp;
    this->hitBox = HitBox{.m_HitboxHeight = 30, .m_HitboxWidth = 30};
    this->position = position;
    this->speed = 500;
    this->type = type;
    this->texture = texture;
    this->size = Size{.m_sizeX = 32, .m_sizeY = 32};
}
