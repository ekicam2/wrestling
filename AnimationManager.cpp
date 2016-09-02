#include "AnimationManager.hpp"

void AnimationManager::setFrameTime(sf::Time frameTime)
{
    _frameTime = frameTime;
}

void update(sf::Time deltaTime)
{

}

Animation& getAnimation(unsigned id)
{
    return _animations[id];
}
