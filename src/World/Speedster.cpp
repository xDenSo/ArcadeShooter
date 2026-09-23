#include "Speedster.hpp"

#include "SDL3_image/SDL_image.h"

Speedster::Speedster(const float hitBox_height, const float hitBox_width, Position position, SDL_Texture* texture) {
    this->maxHp = 100;
    this->hp = this->maxHp;
    this->hitBox_height = hitBox_height;
    this->hitBox_width = hitBox_width;
    this->position = position;
    this->speed = 100;
    this->type = type;
    this->texture = texture;
}
