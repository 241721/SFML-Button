#ifndef BUTTON_H
#define BUTTON_H
#include <SFML/Graphics.hpp>
#include <string>

class Button: public sf::Drawable
{
    private:
        sf::Text text;
        sf::RectangleShape shape;
    public:
        Button(sf::Vector2f c_position, std::string c_text,sf::Font & c_font);
        void draw(sf::RenderTarget& target, sf::RenderStates states) const;
        bool pointed();
        void clicked();
};

#endif // BUTTON_H
