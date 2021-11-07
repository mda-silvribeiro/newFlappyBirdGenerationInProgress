#include <iostream>
#include "Game.hpp"

/*#include <SFML/Graphics.hpp>
#include <iostream>

#define SCREEN_WIDTH 1024
#define SCREEN_HEIGHT 1024
*/
int main()
{
    Mda::Game( 800, 600, "SFML Starter" );
    /*
    //this line will render the window with the Width, Height and title
    sf::RenderWindow window(sf::VideoMode(SCREEN_WIDTH, SCREEN_HEIGHT), "mda-silvribeiro");
    
    //this loop will run the window while have event
    while( window.isOpen())
    {
        //handle input/events
        sf::Event event;
        
        while( window.pollEvent( event )) //check the event
        {
            switch ( event.type )
            {
                case sf::Event::Closed:
                    window.close();
                    
                    break;
            }
        }
        // update game logic
        
        window.clear(); //clear the contents off screen
        
        // draw objects
        
        window.display( );
        
    }*/
    return (EXIT_SUCCESS);
}
