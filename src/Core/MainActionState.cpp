#include "MainActionState.h"

#include "Particles/ParticleBuilder.h"

MainActionState::MainActionState()
{
	m_particles.push_back(ParticleBuilder::Circle(10.f, sf::Color::Green, sf::seconds(1)));
}

void MainActionState::UpdateEvent(const sf::Event& event)
{

}

void MainActionState::Update(const float dt)
{
	for (auto& p : m_particles)
	{
		p->Update();
	}
}

void MainActionState::Render(sf::RenderTarget& target)
{
	for (auto& p : m_particles)
	{
		p->Render(target);
	}
}