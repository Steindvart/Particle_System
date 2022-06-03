#pragma once

#include "SFML/System.hpp"
#include "SFML/Graphics.hpp"

#include "SettingsManager.h"

class Core final
{
public:
	void Run();

private:
	std::unique_ptr<sf::RenderWindow> m_window;
	SettingsManager  m_settingsMgr;

	//#TODO: enum for states
	std::vector<int> m_states;

	sf::Clock m_clock;
	float	  m_dt;
};