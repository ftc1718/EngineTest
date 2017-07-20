#include "application.h"

using namespace graphics;
using namespace maths;

Application::Application()
{

}

Application::~Application()
{
	delete m_pUILayer;
}

void Application::init()
{
	m_pWindow = createWindow("EngineTest", 960, 540);
	m_pUILayer = new UILayer();
	m_pFps = new Label("", m_pWindow->getWidth() - 120, m_pWindow->getHeight() - 35, 0xffffffff);
	m_pUILayer->add(m_pFps);
}

void Application::tick()
{
	m_pFps->m_text = std::to_string(getFPS()) + "fps";
}

void Application::update()
{

}

void Application::render()
{
	m_pUILayer->render();
}
