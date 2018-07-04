#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include "Button.h"

using namespace sf;
using namespace std;

int main()
{
    //OKNA APLIKACJI:
    RenderWindow oknoGry( VideoMode( 1920, 1080, 32 ), "Button", Style::Fullscreen );
    oknoGry.setFramerateLimit(60);

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    Font font;
    font.loadFromFile("WorkSans.otf");
    Button button(Vector2f(100,100),"PRZYCISK",font);
    while(oknoGry.isOpen())
    {

        Event zdarzenie;
        while( oknoGry.pollEvent( zdarzenie ) )
        {
            if( Keyboard::isKeyPressed(Keyboard::Enter) )
            {

            }
            if( Keyboard::isKeyPressed(Keyboard::Q) )
            {

            }
            if( Keyboard::isKeyPressed(Keyboard::Escape) )
            {
                oknoGry.close();
            }
        }
        button.clicked();
        oknoGry.clear();
        oknoGry.draw(button);
        oknoGry.display();
    }
    return 0;
}
