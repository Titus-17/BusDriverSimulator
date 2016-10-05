#ifndef GLFunc_h
#define GLFunc_h

/* Image type - contains height, width, and data */
struct Image
{
    unsigned long sizeX;
    unsigned long sizeY;
    char *data;
};

int ImageLoad(char *filename, Image *image);
int getCount();

GLvoid ReSizeGLScene(GLsizei Width, GLsizei Height);
GLvoid LoadGLTextures();
GLvoid InitGL(GLsizei Width, GLsizei Height);
GLvoid DrawGLScene();

void filescan();
void keyPressed(unsigned char key, int x, int y);
void specialKeyPressed(int key, int x, int y);

#endif