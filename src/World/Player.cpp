#include "Player.hpp"
#include <print>
#include "/home/xcharlie/gamedev/ArcadeShooter/src/Window.hpp"

int Player::nextId =1;

Player::Player() {
    this->id = nextId;
    nextId++;
    this->exPoints = 0;
    this->maxEXP = 20000;



}
Player::~Player() {
    std::println("Ship {} is destroyed", id);
}
void Player::update(Window& window) {
    Player::moveCharacter(window);
}
void Player::render(Window& window ){
SDL_FRect src =  {0.0f, 0.0f, 32.0f, 32.0f};
SDL_FRect dst =  {position.m_posX, position.m_posY, hitBox_height, hitBox_width};
SDL_RenderTexture(window.getSDLRenderer(), texture, nullptr, &dst);
}


void Player::moveCharacter(Window& window) {
    const bool *keyStates = SDL_GetKeyboardState(nullptr);

    if (keyStates[SDL_SCANCODE_W]) {
        this->position.m_posY -= this->speed * window.getDeltaTime();
    }
    if (keyStates[SDL_SCANCODE_S]) {
        this->position.m_posY += this->speed * window.getDeltaTime();
    }
    if (keyStates[SDL_SCANCODE_A]) {
        this->position.m_posX -= this->speed * window.getDeltaTime();
    }
    if (keyStates[SDL_SCANCODE_D]) {
        this->position.m_posX += this->speed * window.getDeltaTime();
    }
}
