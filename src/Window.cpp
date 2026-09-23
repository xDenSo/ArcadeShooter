#include <iostream>
#include <SDL3/SDL.h>
#include "Window.hpp"

Window::Window(){

    SDLWindow = SDL_CreateWindow(
        "Space Fighter", 800, 300,
        SDL_WINDOW_RESIZABLE);
    SDLRenderer = SDL_CreateRenderer(SDLWindow, nullptr);
    lastTime = 0;

};
void Window::Render(){
    const auto* Fmt = SDL_GetPixelFormatDetails(
        getSurface()-> format);

    SDL_FillSurfaceRect(
        getSurface(),
        nullptr,
        SDL_MapRGB(Fmt, nullptr, 255, 255, 255)
    );
}

void Window::Update(){
    SDL_UpdateWindowSurface(SDLWindow);
}
SDL_Surface* Window::getSurface()const{
    return SDL_GetWindowSurface(SDLWindow);
}

SDL_Renderer *Window::getSDLRenderer() const {
    return SDLRenderer;
}
void Window::setSDLRenderer(SDL_Renderer *renderer) {
    SDLRenderer = renderer;
}

void Window::clear() {
    SDL_RenderClear(getSDLRenderer());
    currentTime = SDL_GetTicks();
    deltaTime = (float)(currentTime - lastTime) / 1000.0f;
    lastTime = currentTime;

}

void Window::show() {
    SDL_RenderPresent(getSDLRenderer());
}

float Window::getDeltaTime(){
    return deltaTime;
}
