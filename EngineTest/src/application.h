#pragma once

#include <indie.h>

#include "UILayer.h"

using namespace indie;

class Application : public Indie
{
private:
	graphics::Window* m_pWindow;
	graphics::Label* m_pFps;
	UILayer* m_pUILayer;
public:
	Application();
	~Application();

	void init() override;
	void tick() override;
	void update() override;
	void render() override;
};