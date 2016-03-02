#include "Animation.hpp"

void Animation::addFrame(sf::Rect frame)
{
    _frames.push_back(frame);
}

void Animation::removeFrame(std::size_t id)
{
    _frames.erase(_frames.begin()+id);
}

void Animation::setSpriteSheet(const sf::Texture& spriteSheet)
{
    _spriteSheet = &spriteSheet;
}

std::size_t Animation::getSize()
{
    return _frames.size();
}


