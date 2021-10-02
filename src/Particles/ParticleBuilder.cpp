#include "ParticleBuilder.h"

Particle ParticleBuilder::Circle(float radius, sf::Color color, sf::Time lifeTime)
{
	return std::move(Custom(new sf::CircleShape(radius), color, lifeTime));
}

Particle ParticleBuilder::Rectangle(const sf::Vector2f& size, sf::Color color, sf::Time lifeTime)
{
	return std::move(Custom(new sf::RectangleShape(size), color, lifeTime));
}

Particle ParticleBuilder::Custom(sf::Shape* shape, sf::Color color, sf::Time lifeTime)
{
	shape->setFillColor(color);

	return std::move(Particle(shape, lifeTime));
}