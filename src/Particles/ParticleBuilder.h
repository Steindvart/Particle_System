#pragma once

#include "Particle.h"

class ParticleBuilder
{
public:
	static Particle Circle(float radius, sf::Color color, sf::Time lifeTime);
	static Particle Rectangle(const sf::Vector2f& size, sf::Color color, sf::Time lifeTime);

	static Particle Custom(std::unique_ptr<sf::Shape> shape, sf::Color color, sf::Time lifeTime);
};