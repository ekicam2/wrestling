#ifndef ANIMATION_HPP
#define ANIMATION_HPP

#include <SFML/Grapics.hpp>

class Animation {
public: 
    void addFrame(sf::Rect frame);
    void removeFrame(std::size_t id);
    void setSpriteSheet(const sf::Texture& spriteSheet);
    std::size_t getSize() const;

private: 
    std::vector<sf::Rect> _frames;
    const sf::texture* _spriteSheet;
}; 
 
#endif
