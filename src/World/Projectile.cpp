#include "Projectile.hpp"

Projectile::Projectile(const Position center, SDL_Texture* texture) {

    this->size = Size{.m_sizeX = 8, .m_sizeY = 16};
    this->speed = 200;
    this->texture = texture;

    this->setPosition(Position{
        .m_posX = center.m_posX - size.m_sizeX / 2,
        .m_posY = center.m_posY - size.m_sizeY / 2
    });
}
void Projectile::setPosition(const Position position) {
    this->m_Position = position;
}
Position Projectile::getPosition() const {
    return m_Position;
}

void Projectile::update(Window& window) {
    this->m_Position.m_posY -= this->speed * window.getDeltaTime();
}
void Projectile::render(const Window& window) const {
    SDL_FRect src =  {.x = 0.0f, .y = 0.0f, .w = 16.0f, .h = 24.0f};
    const SDL_FRect dst =  {.x = m_Position.m_posX, .y = m_Position.m_posY, .w = size.m_sizeX, .h = size.m_sizeY};
    SDL_RenderTexture(window.getSDLRenderer(), texture, nullptr, &dst);
}
bool Projectile::isOffScreen() const {
    return m_Position.m_posY + size.m_sizeY < 0.0f;
}

