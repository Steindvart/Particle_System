#pragma once

#include "SFML/System.hpp"
#include "SFML/Graphics.hpp"

#include "SettingsManager.h"

class Core
{
public:
	void Run();

private:
	sf::RenderWindow m_window;
	SettingsManager  m_settingsMgr;

	sf::Clock m_clock;
	float	  m_dt;
};