#pragma once
#include <SFML/Graphics.hpp>

class Animation {
public: 
    Animation(const sf::Texture& spriteSheet);
    Animation(const sf::Texture* spriteSheet);

    void setSpriteSheet(const sf::Texture& spriteSheet);
    void setSpriteSheet(const sf::Texture* spriteSheet);

    void addFrame(const sf::IntRect& frame);
    void removeFrame(unsigned id);
    sf::IntRect getFrame(unsigned id);
    std::size_t getSize() const;

private: 
    std::vector<sf::IntRect> _frames;
    unsigned _currentFrame;
    const sf::Texture* _spriteSheet;
}; 
