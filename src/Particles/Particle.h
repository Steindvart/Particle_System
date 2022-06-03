#pragma once

#include <SFML/Graphics.hpp>

class Particle : public sf::Drawable
{
public:
	Particle();
	Particle(std::unique_ptr<sf::Shape> shape, sf::Time m_lifeTime);
	~Particle();

	sf::Shape& GetShape() { return *m_shape; }
	sf::Shape& GetShape() const { return *m_shape; }

	sf::Vector2f GetMainForce() const { return m_mainForce; }
	void SetMainForce(sf::Vector2f& newForce) { m_mainForce = newForce; }
	
	sf::Vector2f GetPosition() const { return m_shape->getPosition(); }
	void SetPosition(const sf::Vector2f& newPos) { m_shape->setPosition(newPos); }

	void Update();

	void draw(sf::RenderTarget& target, sf::RenderStates states) const override;

private:
	std::unique_ptr<sf::Shape> m_shape;

	sf::Vector2f m_mainForce;
	sf::Time m_lifeTime;
};