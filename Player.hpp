#ifndef PLAYER_HPP
#define PLAYER_HPP
 
#include <SFML/Graphics.hpp>
#include "AnimationManager.hpp"

class Player : public sf::Sprite {
public:
    Player(sf::Time frameTime = sf::seconds(0.2f));
    void moveLeft();
    void moveRight();
    void moveDown();
    void moveUp();
    void jump();
    void update(sf::Time deltaTime);
    void setSpriteSheet(sf::Texture* texture);
    void setFrameTime(sf::Time frameTime);


private:
    AnimationManager _animManager;
    sf::Texture* _spriteSheet;
    sf::Time _currentTime;
    sf::Time _jumpTime;
    bool _isGrounded;
    bool _isLeft;
}; 
 
#endif
