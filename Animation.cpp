#include "Animation.hpp"

void Animation::addFrame(sf::IntRect frame)
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

std::size_t Animation::getSize() const
{
    return _frames.size();
}

sf::IntRect Animation::getFrame(std::size_t id)
{
    return _frames.at(id);
}
