OBJS = Murry.cpp Murry.hpp Mesh.cpp Mesh.hpp MurryCore.cpp Shader.cpp Shader.hpp stb_image.h stb_image.c Texture.hpp Texture.cpp
INCLUDE_PATH = -IC:\Users\lay00\Documents\cpp-projects\dev\i686-w64-mingw32\include -IC:\Users\lay00\Documents\cpp-projects\glew-2.1.0\include -IC:\Users\lay00\Documents\cpp-projects\glm-0.9.8.5
LIBRARY_PATH = -LC:\Users\lay00\Documents\cpp-projects\dev\i686-w64-mingw32\lib -LC:\Users\lay00\Documents\cpp-projects\glew-2.1.0\lib\Release\Win32
COMPILE_FLAG = -w -Wall -pedantic -ansi
FINISHED_COMFILE_FLAG = -Wl,-subsystem,windows
LINKER_FLAG = -lmingw32 -lSDL2main -lSDL2 -lSDL2_image -lglew32s -lglu32 -lglew32 -lopengl32 -lkernel32 -luser32 -lgdi32 -mwindows
OTHER = -std=c++11
OBJ_NAME = Murry
CC = g++

all : $(OBJS)
	$(CC) $(OBJS) $(INCLUDE_PATH) $(LIBRARY_PATH) $(COMPILE_FLAG) $(LINKER_FLAG) $(OTHER)  -o $(OBJ_NAME)
	
clean:
	rm $(OBJ_NAME)