#include <iostream>
#include <SDL3/SDL.h>
#include "Window.hpp"

Window::Window(){

    SDLWindow = SDL_CreateWindow(
        "Space Fighter", 800, 300,
        SDL_WINDOW_RESIZABLE 
    );

    

    const auto* Fmt = SDL_GetPixelFormatDetails(getSurface()-> format);

    SDL_FillSurfaceRect(
        getSurface(),
        nullptr,
        SDL_MapRGB(Fmt, nullptr, 255, 255, 255)
    );
    SDL_UpdateWindowSurface(SDLWindow);
};


SDL_Surface* Window::getSurface()const{
    return SDL_GetWindowSurface(SDLWindow);
}