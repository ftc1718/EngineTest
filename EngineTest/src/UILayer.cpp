#include "UILayer.h"
using namespace indie;
using namespace graphics;

UILayer::UILayer()
	: Layer(new BatchRenderer2D(), new Shader("src/shaders/ui.vert", "src/shaders/ui.frag"), maths::mat4::orthographic(0, 960, 0, 540, -1, 1))
{

}

UILayer::~UILayer()
{

}
