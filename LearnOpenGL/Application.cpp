#include "Application.h"
#include <string>

enum BlockType : std::string
{
	AIR,
	GRASS,
	DIRT,
	SAND,
	STONE,
	WATER,
	SNOW,
	WOOD,
	LEAVES,
	FALLLEAVES,
	RED,
};

switch (blocks[x][y][z])
{
case BlockType::GRASS:
	blockColor = { 0.0f, 1.0f, 0.0f };
	break;
case BlockType::DIRT:
	blockColor = { 0.6f, 0.3f, 0.2f };
	break;
case BlockType::SAND:
	blockColor = { 0.9f, 0.9f, 0.5f };
	break;
case BlockType::STONE:
	blockColor = { 0.3f, 0.3f, 0.3f };
	break;
case BlockType::WATER:
	blockColor = { 0.1f, 0.9f, 0.0f };
	break;
case BlockType::SNOW:
	blockColor = { 0.9f, 1.0f, 0.0f };
	break;
case BlockType::WOOD:
	blockColor = { 0.9f, 1.0f, 0.0f };
	break;
};

void Application::idkfwhatthisisyet()
{
	{
		chunk->Render(viewProjectionMatrix);

		// Set uniforms for model, view, and projection matrices
		glUniformMatrix4fv(projLoc, 1, GL_FALSE, glm::value_ptr(modeMatrix));
		glUniformMatrix4fv(projLoc, 1, GL_FALSE, glm::value_ptr(viewMatrix));
		glUniformMatrix4fv(projLoc, 1, GL_FALSE, glm::value_ptr(projectionMatrix));

		cubes[x][y][z]->Draw();

		// Swap buffers and poll events
		glfwSwapBuffers(window);
		glfwPollEvents();
	}
}

void Application::Update()
{
	// Update cube rotation
	static float rotationAngle = 0.0f;
	rotationAngle += 0.5f; // Adjust the rotation speed
	if (rotationAngle >= 360.0f) {
		rotationAngle -= 360.0f;
	}

	// Update the model matrix to apply rotation
	modelMatrix = glm::rotate(glm::mat4(1.0f), glm::radians(rotationAngle), glm::vec3(0.0f, 1.0f, 0.0f));
}