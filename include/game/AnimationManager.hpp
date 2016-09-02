#pragma once

#include <vector>
#include "Animation.hpp"

class AnimationManager 
{
public:
    AnimationManager(const sf::Time& frameTime)
    void setFrameTime(const sf::Time& frameTime);
    void update(const sf::Time& deltaTime);

    void addAnimation(const Animation& animation);
    std::vector<Animation>& getAnimations() const; 
    Animation& getAnimation(unsigned id) const;

    sf::Time getFrameTime() const;    
    unsigned getCurrentFrame() const;

private: 
    std::vector<Animation> _animations;
    sf::Time _frameTime;
    std::vector<Animation>::iterator _currentAnimation;
}; 
