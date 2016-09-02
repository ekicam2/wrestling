#pragma once
#include <SFML/Graphics.hpp>

class Animation {
public: 
    void addFrame(sf::IntRect frame);
    void removeFrame(std::size_t id);
    sf::IntRect getFrame(std::size_t id);
    void setSpriteSheet(const sf::Texture& spriteSheet);
    std::size_t getSize() const;

private: 
    std::vector<sf::IntRect> _frames;
    const sf::Texture* _spriteSheet;
}; 
