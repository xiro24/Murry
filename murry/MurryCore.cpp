#include "Murry.hpp"
#include "Mesh.hpp"
#include <GL/glew.h>
#include "Shader.hpp"
#include "Texture.hpp"

int main(int argc, const char* argv[]) {
	Display display(800,600,"Cradle");
	
	Vertex vertices[] = {Vertex(glm::vec3(-0.5, -0.5, 0),glm::vec2(0.0,0.0)),
						 Vertex(glm::vec3(0, 0.5, 0),glm::vec2(0.5,1.0)),
						 Vertex(glm::vec3(0.5, -0.5, 0),glm::vec2(1.0,0.0)),};
						 
	Mesh mesh(vertices, sizeof(vertices)/sizeof(vertices[0]));
	
	Shader shader("./res/basicShader");
	
	Texture texture("./images/elloruia-0.jpg");
	while (!display.IsClosed()){

		glClearColor(0.0f,0.15f,0.3f,1.0f);
		glClear(GL_COLOR_BUFFER_BIT);
		
		shader.Bind();
		texture.Bind(0);
		mesh.Draw();
		
		display.Update();
	}
	
	return 0;
}