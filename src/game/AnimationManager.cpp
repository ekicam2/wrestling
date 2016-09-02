#include "AnimationManager.hpp"

void AnimationManager::setFrameTime(const sf::Time& frameTime)
{
    _frameTime = frameTime;
}

void update(sf::Time deltaTime)
{
    _currentTime += deltaTime;
    if(_currentTime >= frameTime)
    {
        
    }
}

void AnimationManager::addAnimation(const Animation& animation)
{
    _animations.push_back(animation);
}

std::Vector<Animation>& AnimationManager::getAnimations() const
{
    return _animations;
}

Animation& AnimationManager::getAnimation(unsigned id) const 
{
    return _animations[id];
}

sf::Time AnimationManager::getFrameTime() const
{
    return _frameTime;
}

unsigned AnimationManager::getCurrentFrame() const
{
    return _currentFrame;
}
