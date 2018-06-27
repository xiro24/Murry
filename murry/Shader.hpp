/*shader*/
#ifndef Shader_hpp
#define Shader_hpp

#include <string>
#include <iostream>
#include <fstream>
#define GLEW_STATIC
#include <GL/glew.h>


class Shader {
	public:
		Shader(const std::string& filename);
		
		void Bind();
		
		virtual ~Shader();
		
	protected:
	private:
	static const unsigned int NUM_SHADERS = 2;
		Shader(const Shader& shader){}
		void operator=(const Shader& shader){}
		
		void CheckShaderError(GLuint shader, GLuint flag, bool isProgram, const std::string& errorMessage);
		std::string LoadShader(const std::string& filename);
		GLuint CreateShader(const std::string& text, unsigned int shaderType);
		
		
		GLuint m_program;
		GLuint m_shaders[NUM_SHADERS];
};

#endif