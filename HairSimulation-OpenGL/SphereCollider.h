#pragma once
#include "GMath.h"
#include "GL\glew.h"
class SphereCollider
{
public:
	GMath::Vector3 pos;
	float radius;

	void draw()
	{
		auto sphere = gluNewQuadric();
		gluQuadricDrawStyle(sphere, GLU_FILL);
		gluQuadricNormals(sphere, GLU_SMOOTH);
		gluQuadricOrientation(sphere, GLU_OUTSIDE);
		gluQuadricTexture(sphere, GL_TRUE);

		glColor3f(0.0, 1.0, 0.0);
		gluSphere(sphere, radius, 16, 16);

		glEndList();
	}
};

