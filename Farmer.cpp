#include "Farmer.h"

Farmer::Farmer(){}

void Farmer::DibujarFarmer(float x, float y, float z)
{
	glPushMatrix();
		glTranslatef(x, y, z);

		// Gorro
		glPushMatrix();
			glScalef(0.5, 0.5, 0.5);
			glRotatef(-90, 1, 0, 0);
            glutSolidCone(2.5, 2, 8, 3);
		glPopMatrix();

		// Cabeza
		glPushMatrix();
			glScalef(0.5, 0.5, 0.5);
			glTranslatef(0, -1, 0);
			glutSolidSphere(1.6, 20, 20);
		glPopMatrix();

	glPopMatrix();
}

Farmer::~Farmer(){}
