//VertexFormat.h
//initial implementation:
// http://in2gpu.com/2014/12/02/create-triangle-opengl-part/
#pragma once
#include "glm\glm.hpp"

namespace Rendering
{

	struct VertexFormat
	{
		glm::vec3 position;
		glm::vec4 color;

		VertexFormat(const glm::vec3 &iPos, const glm::vec4 &iColor)
		{
			position = iPos;
			color = iColor;
		}

		VertexFormat() {}

	};
}