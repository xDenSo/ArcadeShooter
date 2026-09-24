#include "Weapon.hpp"

#include "GeneralData.hpp"
#include "Projectile.hpp"

Weapon::Weapon() = default;

void Weapon::shoot(Position position) {
    projectiles.emplace_back(position, projectileTexture);
}

void Weapon::update(Window& window) {
    for (Projectile& projectile : projectiles) {
        projectile.update(window);
    }
    std::erase_if(projectiles, [](const Projectile& projectile) {
        return projectile.isOffScreen();
    });
}

void Weapon::render(const Window& window) const {
    for (const Projectile& projectile : projectiles) {
        projectile.render(window);
    }
}

void Weapon::setProjectileTexture(SDL_Texture* texture) {
    projectileTexture = texture;
}
