#ifndef SCENE_HPP
#define SCENE_HPP

#include <SFML/Graphics.hpp>

class Scene {
public:
    virtual bool init(sf::RenderWindow* window) = 0;
    virtual int run() = 0;
    virtual void reset() = 0;
}; 
 
#endif
