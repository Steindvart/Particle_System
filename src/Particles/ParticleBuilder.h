#pragma once

#include "Particle.h"

class ParticleBuilder
{
public:
	static Particle Circle(float radius, sf::Color color, sf::Time lifeTime);
	static Particle Rectangle(const sf::Vector2f& size, sf::Color color, sf::Time lifeTime);

	static Particle Custom(sf::Shape* shape, sf::Color color, sf::Time lifeTime);
};