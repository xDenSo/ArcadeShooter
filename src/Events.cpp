#include "Events.hpp"
#include "World/Player.hpp"

void Events::handleEvent(SDL_Event& e, Player& player) {
    if (e.type == SDL_EVENT_KEY_DOWN && e.key.scancode == SDL_SCANCODE_SPACE && !e.key.repeat) {
        player.shoot(player.getPosition());
    }
}