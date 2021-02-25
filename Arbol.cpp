#include "Arbol.h"

Arbol::Arbol(){}

void Arbol::DibujarArbol(float aX, float aY, float aZ)
{
	glPushMatrix();

		glTranslatef(aX, aY, aZ);

		// Copa del arbol
		glPushMatrix();
			glTranslatef(0, 1, 0);
			glutSolidSphere(1, 20, 20);
		glPopMatrix();

		// Tronco del arbol
		glPushMatrix();
			glRotatef(90, 1, 0, 0);
			glutSolidCylinder(0.5, 1, 20, 20);
		glPopMatrix();

	glPopMatrix();
}

Arbol::~Arbol(){}
