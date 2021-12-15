//Code by jack marma ID: 182-15-2132
#include <GL/glut.h>
#include <stdio.h>
#include <GL/gl.h>
#include <math.h>

void init()
{
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 30.0, 0.0, 35.0);
}

void circle(double e, double f, double g)
{
    float theta;
    int i;
    glBegin(GL_POLYGON);
    for(i=0; i<180; i++)
    {
        theta=i*3.142/180;
        glVertex2f(e+g*cos(theta),f+g*sin(theta));
    }
    glEnd();
}

void Draw()
{
    glClear(GL_COLOR_BUFFER_BIT);

    //Umbrella top side
    glColor3f(2,0,0);
    glBegin(GL_POLYGON);
    glVertex2f(14.8, 24);
    glVertex2f(15.2, 24);
    glVertex2f(15.2, 23);
    glVertex2f(14.8,23);
    glEnd();

    //Line code in the umbrella
    glColor3f(0,0.7,0.8);
    glBegin(GL_POLYGON);
    glVertex2f(14.8, 24);
    glVertex2f(15.2, 24);
    glVertex2f(15.2, 7);
    glVertex2f(14.8,7);
    glEnd();

    //hand side code
    glColor3f(0.2,0.2,0.2);
    glBegin(GL_POLYGON);
    glVertex2f(14.6, 10);
    glVertex2f(15.5, 10);
    glVertex2f(15.5, 8);
    glVertex2f(14.6,8);
    glEnd();

    glColor3f(0,0.5,0);
    circle(15,15,8);

    glFlush();
    glutSwapBuffers();
}

int main(int argc,char **argv)
{


    glutInit(&argc,argv);
    glutInitDisplayMode ( GLUT_RGB | GLUT_DOUBLE );
    glutInitWindowPosition(100,100);
    glutInitWindowSize(1000,1000);
    glutCreateWindow("Lab final Name: jacky Mong Marma. ID: 182-15-2132");
    init();
    glutDisplayFunc(Draw);
    glutMainLoop();
    return 0;
}
