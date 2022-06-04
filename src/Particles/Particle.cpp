#include <memory>
#include <iostream>

#include "Particle.h"

Particle::Particle()
	: m_shape(std::make_unique<sf::CircleShape>(10.f))
	, m_lifeTime(sf::milliseconds(1000))
{

}

Particle::Particle(std::unique_ptr<sf::Shape> shape, sf::Time lifeTime)
	: m_shape(std::move(shape))
	, m_lifeTime(lifeTime)
{
	std::cout << "Particle: create" << std::endl;
}

Particle::~Particle()
{
	std::cout << "Particle: destroy" << std::endl;
}

void Particle::Update()
{

}

void Particle::Render(sf::RenderTarget& target)
{
	target.draw(*m_shape);
}
