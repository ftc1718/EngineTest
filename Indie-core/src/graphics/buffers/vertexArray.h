#pragma once
#include <vector>

#ifdef INDIE_EMSCRIPTEN
	#define GLFW_INCLUDE_ES3
	#include <GLFW/glfw3.h>
#else
	#include <GL/glew.h>
#endif

#include "buffer.h"

//每一个需要渲染的物体包含的buffer（顶点buffer，颜色buffer）

namespace indie
{
	namespace graphics
	{
		class VertexArray
		{
		private:
			GLuint m_arrayID;
			std::vector<Buffer*> m_buffers;
		public:
			VertexArray();
			~VertexArray();
			
			void addBuffer(Buffer* buffer, GLuint index);
			void bind() const;
			void unbind() const;
		};
	}
}