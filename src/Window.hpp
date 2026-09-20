#pragma once
#include <SDL3/SDL.h>

class Window
{
    private:
        SDL_Window* SDLWindow{nullptr};
    public:
        Window();
        SDL_Surface* getSurface() const;
};
