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

    _textures[1] = new sf::Texture;
    if(!_textures[1]->loadFromFile("/home/ekicam2/Projects/wrestling game/res/chars/bullhagar.png"))
    {
        std::cerr << "could not load ring.png" << std::endl;
        return false;
    }

    _player.setSpriteSheet(_textures[1]);

    _sprites[0] = new sf::Sprite(*_textures[0]);
    _sprites[0]->setOrigin(_sprites[0]->getGlobalBounds().width/2, _sprites[0]->getGlobalBounds().height/2);
    _sprites[0]->setPosition(_window->getSize().x/2, _window->getSize().y/2);
    

    
    return true;
}

int Level::run()
{
    while(true)
    {
        /* Prepare all the stuff */
        sf::Time frameTime = _frameClock.restart();
        auto eventCode = catchEvents();
        if(eventCode == 100000)
            std::cout << "DEBUG SO HARD" << std::endl;
    
    
        _window->clear();
        // draw stuff goes here
        _window->draw(*_sprites[0]);
        _window->draw(_player);
       
        _player.update(frameTime); 
        _window->display();
    }
}

void Level::reset()
{
}

int Level::catchEvents()
{
    sf::Event event;
    while(_window->pollEvent(event))
    {
        switch(event.type)
        {
            case  sf::Event::KeyPressed:
                {
                    switch(event.key.code)
                    {
                        case sf::Keyboard::Escape:
                            _window->close();
                            break;

                        case sf::Keyboard::Left:
                            _player.moveLeft();
                            break;

                        case sf::Keyboard::Right:
                            _player.moveRight();
                            break;

                        case sf::Keyboard::Up:
                            _player.moveUp();
                            break;

                        case sf::Keyboard::Down:
                            _player.moveDown();
                            break;

                        case sf::Keyboard::Space:
                            _player.jump();
                            break;
                    }
                }
                break;
        }
    }
}
