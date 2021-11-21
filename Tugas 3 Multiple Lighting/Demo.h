#pragma once
#include "RenderEngine.h"
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include <glm/gtx/vector_angle.hpp>
#include <SOIL/SOIL.h>

class Demo :
	public RenderEngine
{
public:
	Demo();
	~Demo();
private:
	GLuint shadowmapShader, atasVBO, atasVAO, atasEBO, cube_texture, planeVBO, planeVAO, planeEBO, plane_texture, stexture, stexture2;
	GLuint cubeVBO2, cubeVAO2, cubeEBO2, cube_texture2, stexture3, stexture4;
	float angle = 0;
	virtual void Init();
	virtual void DeInit();
	virtual void Update(double deltaTime);
	virtual void Render();
	virtual void ProcessInput(GLFWwindow *window);
	void BuildTexturedCube();
	void BuildTexturedCube2();
	void BuildTexturedPlane();
	void DrawTexturedCube();
	void DrawTexturedCube2();
	void DrawTexturedPlane();
};

