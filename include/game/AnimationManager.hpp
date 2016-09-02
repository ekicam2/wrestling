#pragma once
#pragma once

#include <vector>
#include "Animation.hpp"

class AnimationManager 
{
public:
    void setFrameTime(sf::Time frameTime);
    void update(sf::Time deltaTime);
    Animation& getAnimation(unsigned id);
    unsigned getCurrentFrame() const;
    sf::Time getFrameTime() const;    
    std::vector<Animation>& getAnimations() const; 

private: 
    std::vector<Animation> _animations;
    sf::Time _frameTime;
    unsigned _currentAnimation;
    unsigned _currentFrame;
}; 
