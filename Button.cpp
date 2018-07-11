#include "Button.h"

Button::Button(sf::Vector2f c_position, std::string c_text, sf::Font & c_font)
{

    text.setString(c_text);
    text.setPosition(c_position);
    text.setCharacterSize(25);
    text.setColor(sf::Color::White);
    text.setFont(c_font);

    shape.setPosition(c_position);
    shape.setFillColor(sf::Color(105,105,105));
    shape.setSize(sf::Vector2f(c_text.size()*14,text.getCharacterSize()+10));

}

void Button::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
    target.draw(shape, states);
    target.draw(text, states);
}

bool Button::pointed(sf::RenderWindow & window)
{
    sf::Vector2i mousePosition=sf::Mouse::getPosition(window);
    if(mousePosition.x>=shape.getPosition().x&&mousePosition.x<=shape.getPosition().x+shape.getSize().x&&mousePosition.y>=shape.getPosition().y&&mousePosition.y<=shape.getPosition().y+shape.getSize().y)
        {
            text.setColor(sf::Color(57,204,204));
            return true;
        }
    else
        {
        text.setColor(sf::Color::White);
        return false;
        }
}
void Button::clicked(sf::RenderWindow & window)
{
    if(pointed(window)==true&&sf::Mouse::isButtonPressed(sf::Mouse::Left)) ;
}
void Button::clicked(sf::RenderWindow & window, void (*Funkcja)())
{
    if(pointed(window)==true&&sf::Mouse::isButtonPressed(sf::Mouse::Left)) (*Funkcja)();
}
