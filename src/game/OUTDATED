#include "Menu.hpp"

#include <iostream>
using namespace std;

int Menu::run()
{
    while(true)
    {
        int ret = pollEvents();

        _window->clear();
        
        for(int i = 0; i < 5; ++i)
        {
            if(_menuPointer == i)
                _textContainer[i].setColor(sf::Color::Magenta);
            else
                _textContainer[i].setColor(sf::Color::White);
                
            _window->draw(_textContainer[i]);
        }

        _window->display();

        if(ret != 0)
            return ret;
    }

    return 0;
}

bool Menu::init(sf::RenderWindow* window)
{
    _window = window;
    _menuPointer = 1;

    if(!_font.loadFromFile("/home/ekicam2/Projects/wrestling game/res/fonts/luchitas.ttf"))
        return false;

    _textContainer[0].setFont(_font);
    _textContainer[0].setString("Wrestling The Game");
    _textContainer[0].setPosition(200, 0);

    _textContainer[1].setFont(_font);
    _textContainer[1].setString("Play");
    _textContainer[1].setPosition(20, 100);

    _textContainer[2].setFont(_font);
    _textContainer[2].setString("Options");
    _textContainer[2].setPosition(20, 150);

    _textContainer[3].setFont(_font);
    _textContainer[3].setString("Credits");
    _textContainer[3].setPosition(20, 200);

    _textContainer[4].setFont(_font);
    _textContainer[4].setString("Exit");
    _textContainer[4].setPosition(20, 250);
    
    return true;
}

int Menu::pollEvents()
{
    sf::Event event;
    while(_window->pollEvent(event))
    {
        if(event.type == sf::Event::Closed)
            _window->close();

        if(event.type == sf::Event::KeyPressed)
        {
            if(event.key.code == sf::Keyboard::Down)
                movePointer('d');
                
            if(event.key.code == sf::Keyboard::Up)
                movePointer('u');

            if(event.key.code == sf::Keyboard::Return)
                return respond();
        }
    }
}

void Menu::movePointer(char dir)
{
    if(dir == 'd')
        _menuPointer++;

    if(dir == 'u')
        _menuPointer--;
    
    if(_menuPointer < 1)
        _menuPointer = 1;

    if(_menuPointer > 4)
        _menuPointer = 4;

}

int Menu::respond()
{
    switch(_menuPointer)
    {
        case 1:
            return 1;
            break;

        case 2:
            //TODO: options
            break;

        case 3:
            //TODO: credits
            break;

        case 4:
            _window->close();
            break;
    }
}

void Menu::reset()
{
}
