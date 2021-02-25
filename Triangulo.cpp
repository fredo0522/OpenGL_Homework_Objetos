#include "Triangulo.h"

Triangulo::Triangulo(){}

void Triangulo::DibujarTriangulo(float x, float y, float z)
{
	glPushMatrix();
		glTranslatef(x, y, z);
		glPushMatrix();
			glScalef(0.8, 0.8, 1);
			glBegin(GL_TRIANGLES);
				glVertex3f(1.5, 0, 0);
				glVertex3f(-1.5, 0, 0);
				glVertex3f(0, 2.5, 0);
			glEnd();
		glPopMatrix();
	glPopMatrix();
}

Triangulo::~Triangulo(){}
