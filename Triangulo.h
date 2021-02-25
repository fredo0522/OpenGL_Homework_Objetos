#include <GL/glew.h>
#include <GL/freeglut.h>
#include "glApplication.h"
#include "glutWindow.h"
#include "glsl.h"

class Triangulo
{
public:
	Triangulo();
	~Triangulo();
	void DibujarTriangulo(float x, float y, float z);
};

