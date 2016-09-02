#ifndef ANIMATIONMANAGER_HPP
#define ANIMATIONMANAGER_HPP
 
#include <vector>
#include "Animation.hpp"

class AnimationManager 
{
public:
    void setFrameTime(sf::Time frameTime);
    void update(sf::Time deltaTime);
    Animation& getAnimation(unsigned id);

private: 
    std::vector<Animation> _animations;
    sf::Time _frameTime;
    unsigned _currentAnimation;
    unsigned _currentFrame;
}; 
 
#endif
