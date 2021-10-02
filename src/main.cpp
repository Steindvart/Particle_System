#include <chrono>

#include <SFML/Graphics.hpp>

#include "Particles/Particle.h"
#include "Particles/ParticleBuilder.h"

int main(int, char* [])
{
	sf::RenderWindow window(sf::VideoMode(200, 200), "SFML works!");

	Particle part1(ParticleBuilder::Circle(10.f, sf::Color::Green, sf::seconds(1)));

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		part1.GetShape().setPosition(static_cast<sf::Vector2f>(sf::Mouse::getPosition(window)));

		window.clear();
		window.draw(part1);
		window.display();
	}

	return 0;
}