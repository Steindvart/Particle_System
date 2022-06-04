#pragma once

#include "SFML/Graphics.hpp"

class State
{
public:
	virtual ~State() {};

	virtual void UpdateEvent(const sf::Event& event) = 0;
	virtual void Update(const float dt) = 0;

	virtual void Render(sf::RenderTarget& target) = 0;

	bool IsQuit() const { return m_isQuit; }

private:
	bool m_isPaused;
	bool m_isQuit;
};