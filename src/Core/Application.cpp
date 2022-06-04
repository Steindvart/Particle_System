#include "Application.h"
#include "MainActionState.h"

Application::Application() 
	: m_window(std::make_unique<sf::RenderWindow>(sf::VideoMode(800, 600), "Particle_System"))
	, m_dt(0)
{
	m_states.push_back(std::make_unique<MainActionState>());
}

void Application::Run()
{
	while (m_window->isOpen())
	{
		UpdateDeltaTime();

		Update();
		Render();
	}
}

void Application::Update()
{
	if (!m_states.empty())
	{
		UpdateEvents();
		m_states.back()->Update(m_dt);

		if (m_states.back()->IsQuit())
			m_states.pop_back();
	}
	else
	{
		ApplicationEnd();
		m_window->close();
	}
}

void Application::UpdateDeltaTime()
{
	m_dt = m_clock.restart().asSeconds();
}

void  Application::UpdateEvents()
{
	sf::Event event;
	while (m_window->pollEvent(event))
	{
		if (event.type == sf::Event::Closed)
			m_window->close();

		if (event.type == sf::Event::KeyPressed)
		{
		}

		m_states.back()->UpdateEvent(event);
	}
}

void Application::Render()
{
	m_window->clear(sf::Color::Black);

	if (!m_states.empty())
	{
		m_states.back()->Render(*m_window);
	}

	m_window->display();
}

void Application::ApplicationEnd()
{

}