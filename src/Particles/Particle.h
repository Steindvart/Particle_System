#pragma once

#include <SFML/Graphics.hpp>

class Particle : public sf::Drawable
{
public:
	Particle();
	Particle(sf::Shape* shape, sf::Time m_lifeTime);

	sf::Shape& GetShape() { return *m_shape.get(); }
	sf::Shape& GetShape() const { return *m_shape.get(); }

	sf::Vector2f GetMainForce() const { return m_mainForce; }
	void SetMainForce(sf::Vector2f& vecF) { m_mainForce = vecF; }
	
	void Update();

	virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const override;

private:
	std::unique_ptr<sf::Shape> m_shape;
	sf::Time m_lifeTime;

	sf::Vector2f m_mainForce;
};