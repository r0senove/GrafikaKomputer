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
	GLuint shaderProgram, VBO, VAO, EBO, texture, VBO2, VAO2, EBO2, texture2, VBO3, VAO3, EBO3, texture3;
	GLuint shadowmapShader, cubeVBO, cubeVAO, cubeEBO, cube_texture, planeVBO, planeVAO, planeEBO, plane_texture, stexture, stexture2;
	GLuint cubeVBO2, cubeVAO2, cubeEBO2, cube_texture2, stexture3, stexture4;
	GLuint activeProgram;
	float angle = 0;
	int oldKeyState = GLFW_RELEASE;
	bool toggleTextured = false;
	virtual void Init();
	virtual void DeInit();
	virtual void Update(double deltaTime);
	virtual void Render();
	void switchShaderProgram();
	virtual void ProcessInput(GLFWwindow *window);
	void BuildColoredCube();
	void BuildColoredPlane();
	void BuildColoredCube2();
	void DrawColoredCube();
	void DrawColoredCube2();
	void DrawColoredPlane();
	void BuildTexturedCube();
	void BuildTexturedCube2();
	void BuildTexturedPlane();
	void DrawTexturedCube();
	void DrawTexturedCube2();
	void DrawTexturedPlane();
};

