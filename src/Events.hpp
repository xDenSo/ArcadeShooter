#pragma once
#include <iostream>
#include <SDL3/SDL.h>

class Events{
    public:
        void handleEvent(SDL_Event& event);
};