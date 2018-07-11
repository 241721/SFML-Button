#ifndef BUTTON_H
#define BUTTON_H
#include <SFML/Graphics.hpp>
#include <string>

class Button: public sf::Drawable
{
    private:
        sf::Text text;
        sf::RectangleShape shape;
        friend class ButtonsInterface;
    public:
        Button(sf::Vector2f c_position, std::string c_text,sf::Font & c_font);
        void setSize(sf::Vector2f Size);
        void draw(sf::RenderTarget& target, sf::RenderStates states) const;
        bool pointed(sf::RenderWindow & window);
        void clicked(sf::RenderWindow & window);
        void clicked(sf::RenderWindow & window, void (*Funkcja)());
};

#endif // BUTTON_H
