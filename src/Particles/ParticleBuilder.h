#pragma once

#include "Particle.h"

class ParticleBuilder
{
public:
	static std::unique_ptr<Particle> Circle(float radius, sf::Color color, sf::Time lifeTime);
	static std::unique_ptr<Particle> Rectangle(const sf::Vector2f& size, sf::Color color, sf::Time lifeTime);

	static std::unique_ptr<Particle> Custom(std::unique_ptr<sf::Shape> shape, sf::Color color, sf::Time lifeTime);
};