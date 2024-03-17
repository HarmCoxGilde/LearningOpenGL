// Main.cpp
#include "Application.h"
#include <glad/glad.h>

int main()
{
	Application app(800, 600, "LearnOpenGL");
	app.Run();
	return 0;
}

GLuint Cube::cubeIndices[] =
{
	0, 1, 1, 2, 2, 3, 3, 0, // Front
	4, 5, 5, 6, 6, 7, 7, 4, // Back
	0, 4, 1, 5, 2 ,6, 3, 7
};

GLfloat Cube::cubeVertices[] =
{
	// Front face
	-0.5f, -0.5f,  0.5f, // 0
	 0.5f, -0.5f,  0.5f, // 1
	 0.5f,  0.5f,  0.5f, // 2
	-0.5f,  0.5f,  0.5f, // 3

	// Back face
	-0.5f, -0.5f, -0.5f, // 4
	 0.5f, -0.5f, -0.5f, // 5
	 0.5f,  0.5f, -0.5f, // 6
	-0.5f,  0.5f, -0.5f, // 7

	// Top face
	-0.5f,  0.5f,  0.5f, // 8
	 0.5f,  0.5f,  0.5f, // 9
	 0.5f,  0.5f, -0.5f, // 10
	-0.5f,  0.5f, -0.5f, // 11

	// Bottom face
	-0.5f, -0.5f,  0.5f, // 12
	 0.5f, -0.5f,  0.5f, // 13
	 0.5f, -0.5f, -0.5f, // 14
	-0.5f, -0.5f, -0.5f, // 15

	// Right face
	 0.5f, -0.5f,  0.5f, // 16
	 0.5f, -0.5f, -0.5f, // 17
	 0.5f,  0.5f, -0.5f, // 18
	 0.5f,  0.5f,  0.5f, // 19

	 // Left face
	 -0.5f, -0.5f,  0.5f, // 20
	 -0.5f, -0.5f, -0.5f, // 21
	 -0.5f,  0.5f, -0.5f, // 22
	 -0.5f,  0.5f,  0.5f, // 23

};

void Cube::Draw()
{
	glBindVertexArray(VAO);
	glDrawElements(GL_LINES, 24, GL_UNSIGNED_INT, 0);
	glBindVertexArray(0);
}