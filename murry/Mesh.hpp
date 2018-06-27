#ifndef Mesh_hpp
#define Mesh_hpp
#include <glm/glm.hpp>
#define GLEW_STATIC
#include <GL/glew.h>

class Vertex {
	public:
		Vertex(const glm::vec3& pos, const glm::vec2& textCoord) {
			this->pos = pos;
			this->textCoord = textCoord;
		}
		
		inline glm::vec3* GetPos() {
			return &pos;
		}
		
		inline glm::vec2* GetTextCoord() {
			return &textCoord;
		}
	protected:
	private:
		glm::vec3 pos;
		glm::vec2 textCoord;
};

class Mesh {
	
	public:
		Mesh(Vertex* vertices, unsigned int numVertices);
		
		void Draw();
		
		virtual ~Mesh();
	protected:	
	private:
		Mesh(const Mesh& other);
		void operator=(const Mesh& other);
		
		enum {
				POSITION_VB,
				TEXTCOORD_VB,
				NUM_BUFFERS
		};
		
		GLuint m_vertexArrayObject;
		GLuint m_vertexArrayBuffers[NUM_BUFFERS];
		unsigned int m_drawCount;
		
};

#endif 