#include <GL/glut.h>
#include "House.hpp"

House::House()
{
	x = 0;
	y = 0;
	z = 0;
	w = 1;
	l = 1;
	h = 1;
}
int House::getx(){return x;}
int House::gety(){return y;}
int House::getz(){return z;}
int House::getw(){return w;}
int House::getl(){return l;}
int House::geth(){return h;}
int House::setx(int tx){x = tx;}
int House::sety(int ty){y = ty;}
int House::setz(int tz){z = tz;}
int House::setw(int tw){w = tw;}
int House::setl(int tl){l = tl;}
int House::seth(int th){h = th;}
House::House(int tx, int ty, int tz, int tw, int tl, int th)
{
	x = tx;
	y = ty;
	z = tz;
	w = tw;
	l = tl;
	h = th;
}
void House::BuildHouse()
{
	glBegin(GL_QUADS);
		//Front face
		glColor3f(0.99, 0.85, 0.49);
		glTexCoord2f(0, 0); glVertex3f(x - w/2, -1, z - l/2);   		// Bottom Left Of The Texture and Quad
		glTexCoord2f(w/0.1, 0); glVertex3f(x + w/2, -1, z - l/2);   	// Bottom Right Of The Texture and Quad
		glTexCoord2f(w/0.1, h/0.1); glVertex3f(x + w/2,  h, z - l/2);   // Top Right Of The Texture and Quad
		glTexCoord2f(0, h/0.1); glVertex3f(x - w/2,  h, z - l/2);   	// Top Left Of The Texture and Quad

		// Back Face
		glTexCoord2f(w/0.1, 0); glVertex3f(x + w/2, -1, z + l/2);   	// Bottom Right Of The Texture and Quad
		glTexCoord2f(w/0.1, h/0.1); glVertex3f(x + w/2,  h, z + l/2);   // Top Right Of The Texture and Quad
		glTexCoord2f(0, h/0.1); glVertex3f(x - w/2,  h, z + l/2);   	// Top Left Of The Texture and Quad
		glTexCoord2f(0, 0); glVertex3f(x - w/2, -1, z + l/2);   		// Bottom Left Of The Texture and Quad

		// Right face
		glTexCoord2f(l/0.1, 0); glVertex3f(x + w/2, -1, z + l/2);   	// Bottom Right Of The Texture and Quad
		glTexCoord2f(l/0.1, h/0.1); glVertex3f(x + w/2,  h, z + l/2);   // Top Right Of The Texture and Quad
		glTexCoord2f(0, h/0.1); glVertex3f(x + w/2,  h, z - l/2);   	// Top Left Of The Texture and Quad
		glTexCoord2f(0, 0); glVertex3f(x + w/2, -1, z - l/2);   		// Bottom Left Of The Texture and Quad

		// Left Face
		glTexCoord2f(0, 0); glVertex3f(x - w/2, -1, z + l/2);   		// Bottom Left Of The Texture and Quad
		glTexCoord2f(l/0.1, 0); glVertex3f(x - w/2, -1, z - l/2);   	// Bottom Right Of The Texture and Quad
		glTexCoord2f(l/0.1, h/0.1); glVertex3f(x - w/2,  h, z - l/2);   // Top Right Of The Texture and Quad
		glTexCoord2f(0, h/0.1); glVertex3f(x - w/2,  h, z + l/2);   	// Top Left Of The Texture and Quad
	glEnd();
}
