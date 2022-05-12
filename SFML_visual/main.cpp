#include <SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode(256, 256), "first image");

    sf::Event event;

    sf::Texture texture;
    texture.loadFromFile("coursesSFML/resources/red.png");

    sf::Sprite sprite(texture, sf::IntRect(0,0,32,32));

    while (window.isOpen())
    {
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::EventType::Closed)
                window.close();
        }

        window.clear();
        window.draw(sprite);
        window.display();
    }


}