#include "Level.hpp"
#include <iostream>

bool Level::init(sf::RenderWindow* window)
{
    _window = window;
    
    _textures[0] = new sf::Texture;
    if(!_textures[0]->loadFromFile("/home/ekicam2/Projects/wrestling game/res/ring.png"))
    {
        std::cerr << "could not load ring.png" << std::endl;
        return false;
    }

    _sprites[0] = new sf::Sprite(*_textures[0]);
    _sprites[0]->setOrigin(_sprites[0]->getGlobalBounds().width/2, _sprites[0]->getGlobalBounds().height/2);
    _sprites[0]->setPosition(_window->getSize().x/2, _window->getSize().y/2);
    

    
    return true;
}

int Level::run()
{
    while(true)
    {
        _window->clear();
        // draw stuff goes here
        _window->draw(*_sprites[0]);
        
        _window->display();
    }
}

void Level::reset()
{
}
