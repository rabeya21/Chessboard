#include <windows.h>
#include <GL/glut.h>

void display(void) {

    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2d(20, 20);
    glVertex2d(40, 20);
    glVertex2d(40, 40);
    glVertex2d(20, 40);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.6, 0.6, 0.6);
    glBegin(GL_POLYGON);
    glVertex2d(40, 20);
    glVertex2d(60, 20);
    glVertex2d(60, 40);
    glVertex2d(40, 40);
    glEnd();
    glColor3f(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2d(60, 20);
    glVertex2d(80, 20);
    glVertex2d(80, 40);
    glVertex2d(60, 40);
    glEnd();
    glColor3f(0.6, 0.6, 0.6);
    glBegin(GL_POLYGON);
    glVertex2d(80, 20);
    glVertex2d(100, 20);
    glVertex2d(100, 40);
    glVertex2d(80, 40);
    glEnd();
    glColor3f(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2d(100, 20);
    glVertex2d(120, 20);
    glVertex2d(120, 40);
    glVertex2d(100, 40);
    glEnd();
    glColor3f(0.6, 0.6, 0.6);
    glBegin(GL_POLYGON);
    glVertex2d(120, 20);
    glVertex2d(140, 20);
    glVertex2d(140, 40);
    glVertex2d(120, 40);
    glEnd();

    glColor3f(0.6, 0.6, 0.6);
    glBegin(GL_POLYGON);
    glVertex2d(20, 40);
    glVertex2d(40, 40);
    glVertex2d(40, 60);
    glVertex2d(20, 60);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2d(40, 40);
    glVertex2d(60, 40);
    glVertex2d(60, 60);
    glVertex2d(40, 60);
    glEnd();
    glColor3f(0.6, 0.6, 0.6);
    glBegin(GL_POLYGON);
    glVertex2d(60, 40);
    glVertex2d(80, 40);
    glVertex2d(80, 60);
    glVertex2d(60, 60);
    glEnd();
    glColor3f(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2d(80, 40);
    glVertex2d(100, 40);
    glVertex2d(100, 60);
    glVertex2d(80, 60);
    glEnd();

    glColor3f(0.6, 0.6, 0.6);
    glBegin(GL_POLYGON);
    glVertex2d(100, 40);
    glVertex2d(120, 40);
    glVertex2d(120, 60);
    glVertex2d(100, 60);
    glEnd();
    glColor3f(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2d(120, 40);
    glVertex2d(140, 40);
    glVertex2d(140, 60);
    glVertex2d(120, 60);
    glEnd();


    glColor3f(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2d(20, 60);
    glVertex2d(40, 60);
    glVertex2d(40, 80);
    glVertex2d(20, 80);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.6, 0.6, 0.6);
    glBegin(GL_POLYGON);
    glVertex2d(40, 60);
    glVertex2d(60, 60);
    glVertex2d(60, 80);
    glVertex2d(40, 80);
    glEnd();
    glColor3f(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2d(60, 60);
    glVertex2d(80, 60);
    glVertex2d(80, 80);
    glVertex2d(60, 80);
    glEnd();
    glColor3f(0.6, 0.6, 0.6);
    glBegin(GL_POLYGON);
    glVertex2d(80, 60);
    glVertex2d(100, 60);
    glVertex2d(100, 80);
    glVertex2d(80, 80);
    glEnd();
    glColor3f(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2d(100, 60);
    glVertex2d(120, 60);
    glVertex2d(120, 80);
    glVertex2d(100, 80);
    glEnd();
    glColor3f(0.6, 0.6, 0.6);
    glBegin(GL_POLYGON);
    glVertex2d(120, 60);
    glVertex2d(140, 60);
    glVertex2d(140, 80);
    glVertex2d(120, 80);
    glEnd();


    glColor3f(0.6, 0.6, 0.6);
    glBegin(GL_POLYGON);
    glVertex2d(20, 80);
    glVertex2d(40, 80);
    glVertex2d(40, 100);
    glVertex2d(20, 100);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2d(40, 80);
    glVertex2d(60, 80);
    glVertex2d(60, 100);
    glVertex2d(40, 100);
    glEnd();
    glColor3f(0.6, 0.6, 0.6);
    glBegin(GL_POLYGON);
    glVertex2d(60, 80);
    glVertex2d(80, 80);
    glVertex2d(80, 100);
    glVertex2d(60, 100);
    glEnd();
    glColor3f(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2d(80, 80);
    glVertex2d(100, 80);
    glVertex2d(100, 100);
    glVertex2d(80, 100);
    glEnd();

    glColor3f(0.6, 0.6, 0.6);
    glBegin(GL_POLYGON);
    glVertex2d(100, 80);
    glVertex2d(120, 80);
    glVertex2d(120, 100);
    glVertex2d(100, 100);
    glEnd();
    glColor3f(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2d(120, 80);
    glVertex2d(140, 80);
    glVertex2d(140, 100);
    glVertex2d(120, 100);
    glEnd();

    glColor3f(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2d(20, 100);
    glVertex2d(40, 100);
    glVertex2d(40, 120);
    glVertex2d(20, 120);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.6, 0.6, 0.6);
    glBegin(GL_POLYGON);
    glVertex2d(40, 100);
    glVertex2d(60, 100);
    glVertex2d(60, 120);
    glVertex2d(40, 120);
    glEnd();
    glColor3f(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2d(60, 100);
    glVertex2d(80, 100);
    glVertex2d(80, 120);
    glVertex2d(60, 120);
    glEnd();
    glColor3f(0.6, 0.6, 0.6);
    glBegin(GL_POLYGON);
    glVertex2d(80, 100);
    glVertex2d(100, 100);
    glVertex2d(100, 120);
    glVertex2d(80, 120);
    glEnd();
    glColor3f(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2d(100, 100);
    glVertex2d(120, 100);
    glVertex2d(120, 120);
    glVertex2d(100, 120);
    glEnd();
    glColor3f(0.6, 0.6, 0.6);
    glBegin(GL_POLYGON);
    glVertex2d(120, 100);
    glVertex2d(140, 100);
    glVertex2d(140, 120);
    glVertex2d(120, 120);
    glEnd();


    glColor3f(0.6, 0.6, 0.6);
    glBegin(GL_POLYGON);
    glVertex2d(20, 120);
    glVertex2d(40, 120);
    glVertex2d(40, 140);
    glVertex2d(20, 140);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2d(40, 120);
    glVertex2d(60, 120);
    glVertex2d(60, 140);
    glVertex2d(40, 140);
    glEnd();
    glColor3f(0.6, 0.6, 0.6);
    glBegin(GL_POLYGON);
    glVertex2d(60, 120);
    glVertex2d(80, 120);
    glVertex2d(80, 140);
    glVertex2d(60, 140);
    glEnd();
    glColor3f(0, 0, 0); //black
    glBegin(GL_POLYGON);
    glVertex2d(80, 120);
    glVertex2d(100, 120);
    glVertex2d(100, 140);
    glVertex2d(80, 140);
    glEnd();

    glColor3f(0.6, 0.6, 0.6); ///gray
    glBegin(GL_POLYGON);
    glVertex2d(100, 120);
    glVertex2d(120, 120);
    glVertex2d(120, 140);
    glVertex2d(100, 140);
    glEnd();
    glColor3f(0, 0, 0); //black
    glBegin(GL_POLYGON);
    glVertex2d(120, 120);
    glVertex2d(140, 120);
    glVertex2d(140, 140);
    glVertex2d(120, 140);
    glEnd();

    glFlush();
}


void init() {
    glClearColor(1.0, 1.0, 1.0, 1.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0, 200, 0, 200);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("193-15-13510");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0; /* ISO C requires main to return int. */
}