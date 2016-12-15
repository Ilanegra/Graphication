#pragma once

#include <iostream>
#include "Object3D.h"
#include "glm/mat4x4.hpp"
#include "glm/gtc/matrix_transform.hpp"
#include "glm/gtc/type_ptr.hpp"
#include "glm/vec4.hpp"
#include "glm/vec3.hpp"
#include "GLFW\glfw3.h"

class Application {
public:
	Application();
	~Application();
	void update();
	void setup();
	void display();
	void reshape(int w, int h);
	void keyboard(int key, int scancode, int action, int mods);

private:	
	Object3D triangle;
	glm::mat4 rotationX;
	glm::mat4 rotationY;
	glm::mat4 rotationZ;
	glm::mat4 transform;
};

