#pragma once

#include "SFML/System.hpp"
#include "SFML/Graphics.hpp"

#include "State.h"
#include "SettingsMgr.h"

class Application final
{
public:
	Application();

	void Run();

private:
	void inline Update();
	void inline UpdateDeltaTime();
	void inline UpdateEvents();

	void inline Render();

	void ApplicationEnd();

	std::unique_ptr<sf::RenderWindow> m_window;
	SettingsMgr m_settings;

	std::vector<std::unique_ptr<State>> m_states;

	sf::Clock m_clock;
	float m_dt;
};