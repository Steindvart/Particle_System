#include <chrono>
#include <iostream>

#include <SFML/Graphics.hpp>

#include "CommonUtils.h"
#include "Particles/Particle.h"
#include "Particles/ParticleBuilder.h"

int main(int, char* [])
{
	sf::RenderWindow window(sf::VideoMode(800, 600), "Particle_System");

	Particle circle = ParticleBuilder::Circle(10.f, sf::Color::White, sf::seconds(1));

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
			{
				window.close();
			}
		}

		circle.SetPosition(static_cast<sf::Vector2f>(sf::Mouse::getPosition(window)));
		circle.GetShape().setFillColor(sf::Color(getRandomUInt8(), getRandomUInt8(), getRandomUInt8()));

		window.clear();
		window.draw(circle);
		window.display();
	}

	return 0;
}