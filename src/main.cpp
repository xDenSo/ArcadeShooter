#include <iostream>
#include <SDL3/SDL.h>
#include "Window.hpp"
#include "Events.hpp"

int main(int, char**){
    //initialize
    SDL_Init(SDL_INIT_VIDEO); 
    Window Window;
    Events events;
    //loop
    bool isRunning = true;
    SDL_Event event;

    while (isRunning)
    {
        while (SDL_PollEvent(&event))
        {
            if(event.type == SDL_EVENT_QUIT){
                isRunning = false;
            }
            events.handleEvent(event);
        }
        
    }
    SDL_Quit;
    return 0;
}