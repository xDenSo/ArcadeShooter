#pragma once
#include <SDL3/SDL.h>

class Window
{
    private:
        SDL_Window* SDLWindow{nullptr};
        SDL_Renderer* SDLRenderer{nullptr};
    public:
        Window();
        SDL_Surface* getSurface() const;
        void Render();
        void Update();
        void clear();
        void show();
        float getDeltaTime();
        SDL_Renderer* getSDLRenderer() const;

        void setSDLRenderer(SDL_Renderer *renderer);
        float deltaTime = 0.0f;
        uint64_t lastTime;
        Uint64 currentTime;
};
