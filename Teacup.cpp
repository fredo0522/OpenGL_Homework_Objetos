#include "Teacup.h"

Teacup::Teacup(){}

void Teacup::DibujarTeacup(float x, float y, float z)
{
	glPushMatrix();
		glTranslatef(x, y, z);
		glPushMatrix();
			glutSolidTeapot(0.8);
		glPopMatrix();
	glPopMatrix();
}

Teacup::~Teacup(){}
