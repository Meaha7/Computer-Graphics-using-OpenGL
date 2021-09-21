// Computer Graphics Assignment 
//Done by Meaha
#include<Windows.h>
#include<GL/glut.h>
#include<math.h>

void init(void)
{
    glClearColor(1.0, 1.0, 1.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(-70.0, 70.0, -60, 150.0);
}
void triangle(void)
{
    GLdouble p1[] = { 0.0,0.0 }, p2[] = { 50.0,0.0 }, p3[] = { 50.0,50.0 };

    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(1.0, 0.0 ,1.0);

    glBegin(GL_TRIANGLES);
    glVertex2dv(p1);
    glVertex2dv(p2);
    glVertex2dv(p3);
    glEnd();

    glColor3f(1.0, 1.0, 0.0);

    p1[0] = (-1 * p1[0] + 0 * p1[1] + 0 * 1);
    p1[1] = (0 * p1[0] + 1 * p1[1] + 0 * 1);


    p2[0] = (-1 * p2[0] + 0 * p2[1] + 0 * 1);
    p2[1] = (0 * p2[0] + 1 * p2[1] + 0 * 1);


    p3[0] = (-1 * p3[0] + 0 * p3[1] + 0 * 1);
    p3[1] = (0 * p3[0] + 1 * p3[1] + 0 * 1);

    glBegin(GL_TRIANGLES);
    glVertex2dv(p1);
    glVertex2dv(p2);
    glVertex2dv(p3);
    glEnd();

    glFlush();
}
void main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowPosition(-100, 100);
    glutInitWindowSize(640, 480);
    glutCreateWindow("Ex 2 - 2D Transformation");
    init();
    glutDisplayFunc(triangle);
    glutMainLoop();
}
