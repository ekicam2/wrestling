#include <SFML/Graphics.hpp>
#include <vector>
#include "Scene.hpp"
#include "Menu.hpp"
#include "Level.hpp"

#include <iostream>

using namespace std;


int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 600), "Wrestling!");

    vector<Scene*> sceneMgr;

    Menu menu;
    sceneMgr.push_back(&menu);

    Level level;
    sceneMgr.push_back(&level);
    
    int currScene = 0;

    while(window.isOpen())
    {
        if(!sceneMgr[currScene]->init(&window))
            break;
       
        int helper = sceneMgr[currScene]->run();
        sceneMgr[currScene]->reset();
        currScene = helper;
    }
    
    return 0;
}
