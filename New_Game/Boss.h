#ifndef BOSS_H
#define BOSS_H

#include "Entity.h"

class Boss :
    public Entity
{
private:

    void initVariables();
    void initComponents();

public:
    Boss(float x, float y, sf::Texture& texture_sheet);
    virtual ~Boss();

    void updateAnimation(const float& dt);
    void update(const float& dt);

    void render(sf::RenderTarget& target);
};

#endif
