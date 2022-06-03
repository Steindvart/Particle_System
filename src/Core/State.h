#pragma once

#include "SFML/Graphics.hpp"

class State
{
public:
	virtual void UpdateEvent(const sf::Event& event) = 0;
	virtual void Update(const float dt) = 0;
	virtual void Render(sf::RenderTarget& target) = 0;

private:

};