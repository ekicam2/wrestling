#include "AnimationManager.hpp"

void AnimationManager::setFrameTime(sf::Time frameTime)
{
    _frameTime = frameTime;
}

void update(sf::Time deltaTime)
{

}

Animation& AnimationManager::getAnimation(unsigned id)
{
    return _animations[id];
}

unsigned AnimationManager::getCurrentFrame() const
{
    return _currentFrame;
}

sf::Time AnimationManager::getFrameTime() const
{
    return _frameTime;
}
