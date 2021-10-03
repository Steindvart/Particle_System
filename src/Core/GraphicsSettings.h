#pragma once

#include <vector>

#include "SFML/Graphics.hpp"

struct GraphicsSettings
{
	std::vector<sf::VideoMode> videoModes;
	sf::VideoMode* currentVideoMode;
	sf::ContextSettings context;

	bool isFullscreen;
	bool isVsync;
	unsigned int framerateLimit;
};