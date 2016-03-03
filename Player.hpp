#ifndef PLAYER_HPP
#define PLAYER_HPP
 
#include <SFML/Graphics.hpp>
#include "Animation.hpp"

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
    sf::Texture* _spriteSheet;
    Animation _animations[4];
    sf::Time _frameTime;
    sf::Time _currentTime;
    sf::Time _jumpTime;
    unsigned _currentAnim;
    unsigned _currentFrame;
    bool _isGrounded;
}; 
 
#endif
