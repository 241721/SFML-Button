#include "Button.h"

Button::Button(sf::Vector2f c_position, std::string c_text, sf::Font & c_font)
{

    text.setString(c_text);
    text.setPosition(c_position);
    text.setCharacterSize(30);
    text.setColor(sf::Color::White);
    text.setFont(c_font);

    shape.setPosition(c_position);
    shape.setFillColor(sf::Color::Red);
    shape.setSize(sf::Vector2f(c_text.size()*20,text.getCharacterSize()+10));

}

void Button::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
    target.draw(shape, states);
    target.draw(text, states);
}

bool Button::pointed()
{
    sf::Vector2i mousePosition=sf::Mouse::getPosition();
    if(mousePosition.x>=shape.getPosition().x&&mousePosition.x<=shape.getPosition().x+shape.getSize().x&&mousePosition.y>=shape.getPosition().y&&mousePosition.y<=shape.getPosition().y+shape.getSize().y)
        {
            text.setColor(sf::Color::Yellow);
            return true;
        }
    else
        {
        text.setColor(sf::Color::White);
        return false;
        }
}
void Button::clicked()
{
    if(pointed()==true) ;

}

