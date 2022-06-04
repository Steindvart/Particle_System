#include "ParticleBuilder.h"

std::unique_ptr<Particle> ParticleBuilder::Circle(float radius, sf::Color color, sf::Time lifeTime)
{
	return Custom(std::make_unique<sf::CircleShape>(radius), color, lifeTime);
}

std::unique_ptr<Particle> ParticleBuilder::Rectangle(const sf::Vector2f& size, sf::Color color, sf::Time lifeTime)
{
	return Custom(std::make_unique<sf::RectangleShape>(size), color, lifeTime);
}

std::unique_ptr<Particle> ParticleBuilder::Custom(std::unique_ptr<sf::Shape> shape, sf::Color color, sf::Time lifeTime)
{
	shape->setFillColor(color);

	return std::make_unique<Particle>(std::move(shape), lifeTime);
}