#ifndef PLAYER_HPP
#define PLAYER_HPP
 
#include <SFML/Graphics.hpp>

class Player : public sf::Sprite {
public:
    void moveLeft();
    void moveRight();
    void moveDown();
    void moveUp();


private:
    sf::Texture* _spriteSheet;
    
}; 
 
#endif
