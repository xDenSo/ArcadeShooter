#include <iostream>
#include <SDL3/SDL.h>
#include "Window.hpp"
#include "Events.hpp"
#include "SDL3_image/SDL_image.h"
#include "World/Player.hpp"
#include "World/Projectile.hpp"
#include "World/Speedster.hpp"

int main(int, char**){
    //initialize
    SDL_Init(SDL_INIT_VIDEO);
    Window Window;
    Events events;
    SDL_Texture* backgroundTexture = IMG_LoadTexture(Window.getSDLRenderer(), "assets/background.png");
    SDL_Texture* scouterTex = IMG_LoadTexture(Window.getSDLRenderer(), "assets/scouter.png");
    SDL_Texture* projectileTex = IMG_LoadTexture(Window.getSDLRenderer(), "assets/projectile.png");

    if (!scouterTex) {
        std::cout << "Textur konnte nicht geladen werden: " << SDL_GetError() << std::endl;
    }
    //loop
    bool isRunning = true;
    SDL_Event event;
    Speedster player(Position{.m_posX = 944,.m_posY = 524},scouterTex);
    player.setProjectileTexture(projectileTex);

    while (isRunning) {
        while (SDL_PollEvent(&event))
        {
            if(event.type == SDL_EVENT_QUIT){
                isRunning = false;
            }
            Events::handleEvent(event,player);
        }
        Window.clear();

        SDL_FRect bgDst{0, 0, 800, 300};
        SDL_RenderTexture(Window.getSDLRenderer(), backgroundTexture, nullptr, &bgDst);

        player.update(Window);

        player.render(Window);
        Window.show();

    }
    return 0;

}
