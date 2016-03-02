#ifndef MENU_HPP
#define MENU_HPP

#include "Scene.hpp"

class Menu : public Scene {
public:
   virtual int run(); 
   virtual bool init(sf::RenderWindow* window);
   virtual void reset();

private:
    std::vector<sf::Sprite> _spriteContainer;
    sf::Text _textContainer[5];
    sf::Font _font;
    sf::RenderWindow* _window;
    int _menuPointer;

    int pollEvents();
    void movePointer(char dir);
    int respond();
}; 
 
#endif
