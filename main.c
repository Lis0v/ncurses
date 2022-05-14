#include <GL/glut.h>
#include <unistd.h>
#include <stdio.h>

void display(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_TRIANGLES);
	glVertex3f(0.5, 0, 0);
	glVertex3f(0, 0.5, 0);
	glVertex3f(1.0, 0, 0);
	glEnd();
	glFlush();
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE);
	glutInitWindowSize(400, 300);
	glutInitWindowPosition(100, 100);
	glutCreateWindow("nigga");
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}
