#pragma once
#include <SDL3/SDL.h>

#include "World/Player.hpp"

class Events{
    public:
        static void handleEvent(SDL_Event& event, Player& player);
};
