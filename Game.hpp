#pragma once

#include <memory>
#include <string>
#include <SFML/Graphics.hpp>
#include "StateMachine.hpp"
#include "AssetManager.hpp"
#include "InputManager.hpp"

namespace Mda
{
    struct GameData
    {
        StateMachine machine;
        sf::RenderWindow window;
        AssetManager assets;
        InputManager input;
    };
    
    typedef std::shared_ptr<GameData> GameDataRef;

    class Game
    {
        public:
            Game( int width, int height, std::string title );
        private:
        const float dt = 1.0f / 60.0f; //the frame rate or what we how many times we want to update per second 60 time per second
            sf::Clock _clock; //is required  for handling  the framerate
            GameDataRef _data = std::make_shared<GameData>( );
            void Run( );

    };
}
