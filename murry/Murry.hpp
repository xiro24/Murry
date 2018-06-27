#ifndef Murry_hpp
#define Murry_hpp

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <iostream>
#undef main

class Display {
	public:
		Display(int width, int height, const std::string& title);
		bool IsClosed();
		void Update();
		
		virtual ~Display();
	protected:	
	private:
		Display(const Display& other)
		{}
		Display& operator =(const Display& other)
		{}
		SDL_Window * m_window; 
		SDL_GLContext m_glContext;
		bool m_isClosed;
};


#endif 