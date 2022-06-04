#pragma once

#include "State.h"
#include "Particles/Particle.h"

class MainActionState : public State
{
public:
	MainActionState();
	~MainActionState() {}

	void UpdateEvent(const sf::Event& event) override;
	void Update(const float dt) override;

	void Render(sf::RenderTarget& target) override;

private:
	std::vector<std::unique_ptr<Particle>> m_particles;
};