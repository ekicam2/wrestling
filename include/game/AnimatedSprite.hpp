#pragma once 
#include <SFML/Graphics.hpp>
#include "AnimationManager.hpp"

class AnimatedSprite : public sf::Sprite {
public:
    AnimatedSprite(sf::Time frameTime = sf::seconds(0.2f));
    void update(sf::Time deltaTime);
    void setSpriteSheet(sf::Texture* texture);
    void setFrameTime(sf::Time frameTime);


private:
    void createAnimations(AnimationManager animManager);
    AnimationManager _animManager;
    sf::Texture* _spriteSheet;
    sf::Time _currentTime;
}; 
