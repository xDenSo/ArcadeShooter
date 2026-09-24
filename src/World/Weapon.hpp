#pragma once
#include <string>
#include <vector>

#include "GeneralData.hpp"
#include "Projectile.hpp"
#include "SDL3/SDL_render.h"

class Window;

class Weapon {
public:
    Weapon();
    ~Weapon() = default;

    void shoot(Position position);
    void update(Window& window);
    void render(const Window& window) const;
    void setProjectileTexture(SDL_Texture* texture);

protected:
    std::string name;
    int damage{0};
    int firerate{0};
    int ammoSize{0};
    float projectileSpeed{0};
    float cooldown{0};

    std::vector<Projectile> projectiles;
    SDL_Texture* projectileTexture{nullptr};
};
