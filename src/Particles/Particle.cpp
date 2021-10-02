#include <memory>
#include <iostream>

#include "Particle.h"

Particle::Particle()
	: m_shape(std::make_unique<sf::CircleShape>(10.f))
	, m_lifeTime(sf::milliseconds(1000))
{

}

Particle::Particle(sf::Shape* shape, sf::Time lifeTime)
	: m_shape(shape)
	, m_lifeTime(lifeTime)
{
}

void Particle::draw(sf::RenderTarget& target, [[maybe_unused]] sf::RenderStates states) const
{
	target.draw(*m_shape);
}