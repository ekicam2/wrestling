#include "Animation.hpp"

Animation::Animation(const sf::Texture& spriteSheet)
:  _currentFrame(0),
 _spriteSheet(&spriteSheet)
{
    
}

Animation::Animation(const sf::Texture* spriteSheet)
:  _currentFrame(0),
 _spriteSheet(spriteSheet)
{
    
}

void Animation::setSpriteSheet(const sf::Texture& spriteSheet)
{
    _spriteSheet = &spriteSheet;
}

void Animation::setSpriteSheet(const sf::Texture* spriteSheet)
{
    _spriteSheet = spriteSheet;
}

void Animation::addFrame(const sf::IntRect& frame)
{
    _frames.push_back(frame);
}

void Animation::removeFrame(unsigned id)
{
    _frames.erase(_frames.begin() + id);
}

sf::IntRect Animation::getFrame(unsigned id)
{
    return _frames.at(id);
}

std::size_t Animation::getSize() const
{
    return _frames.size();
}
