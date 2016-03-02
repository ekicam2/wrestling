#ifndef LEVEL_HPP
#define LEVEL_HPP
 
#include "Scene.hpp"

class Level : public Scene {
public: 
    virtual int run();
    virtual bool init(sf::RenderWindow* window);
    virtual void reset();
private:
    sf::RenderWindow* _window;
    sf::Texture* _textures[10];
    sf::Sprite* _sprites[20];


}; 
 
#endif
