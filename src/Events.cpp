#include "Events.hpp"
#include <iostream>

void Events::handleEvent(SDL_Event& e){
    if(e.type == SDL_EVENT_KEY_UP){
        std::cout << "move up\n";
    }else if(e.type == SDL_EVENT_KEY_DOWN){
        std::cout << "move down\n";
    }
}