#include<iostream>
#include<cstdio>
#include <windows.h>
#include<math.h>
#include <vector>
#include <cstdlib>
# define PI 3.14159265358979323846
#include <GL/gl.h>
#include <GL/glut.h>
#include<MMSystem.h>
using namespace std;
void PointLight(const float x, const float y, const float z,  const float amb, const float diff, const float spec);

void PointLight(const float x, const float y, const float z, const float amb, const float diff, const float spec)
{
  glEnable(GL_LIGHTING);
  GLfloat light_ambient[] = { amb,amb,amb, 1.0 };
  GLfloat light_position[] = {-0.9,.9,0, 0.0 };
  glLightfv(GL_LIGHT0, GL_AMBIENT, light_ambient);
  glLightfv(GL_LIGHT0, GL_POSITION, light_position);
  glEnable(GL_LIGHT0); //enable the light after setting the properties
}

GLfloat position22 = 0.0f;
GLfloat speed22 = 0.007f;

void birdd(int value)
{
    if(position22 > 1.0)
        position22 =-1.0f;

    position22 += speed22;
	glutPostRedisplay();
	glutTimerFunc(100, birdd, 0);
}
void bird()
{
    int i;

	GLfloat mm=0.18f; GLfloat nn=0.8f; GLfloat radiusmm =0.01f;
	int triangleAmount = 30;
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN); //Face
    glColor3ub(0,0,0);
    glVertex2f(mm, nn); //center of circle
    for(i = 0; i <= triangleAmount;i++)
    {
        glVertex2f(mm + (radiusmm * cos(i *  twicePi / triangleAmount)),nn + (radiusmm * sin(i * twicePi / triangleAmount)));
    }
	glEnd();

    glBegin(GL_POLYGON); //Down Part
    glColor3ub(0,0,0);

    glVertex2f(0.1f,0.8f);
    glVertex2f(0.11f,0.79f);
    glVertex2f(0.12f,0.78f);
    glVertex2f(0.16f,0.77f);
    glVertex2f(0.19f,0.79f);
    glVertex2f(0.201f,0.8f);
    glEnd();

    glBegin(GL_TRIANGLES); //Back Side
    glColor3ub(0,0,0);

    glVertex2f(0.175f,0.8f);
    glVertex2f(0.15f,0.8f);
    glVertex2f(0.14f,0.84f);
    glEnd();


    glBegin(GL_TRIANGLES); //Front Side
    glColor3ub(0,0,0);

    glVertex2f(0.175f,0.8f);
    glVertex2f(0.144f,0.8f);
    glVertex2f(0.12f,0.83f);
    glEnd();

    ////////////////////////////////////////////////
    //2nd Bird
    GLfloat mmm=0.062f; GLfloat nnn=0.8f; GLfloat radiusmmm =.01f;

	glBegin(GL_TRIANGLE_FAN); //Face
    glColor3ub(0,0,0);

    glVertex2f(mmm, nnn); //center of circle
    for(i = 0; i <= triangleAmount;i++)
    {
        glVertex2f(mmm + (radiusmmm * cos(i *  twicePi / triangleAmount)),nnn + (radiusmmm * sin(i * twicePi / triangleAmount)));
    }
	glEnd();

	glBegin(GL_POLYGON);
    glColor3ub(0,0,0); //Down Part

    glVertex2f(-0.02f,0.8f);
    glVertex2f(-0.01f,0.79f);
    glVertex2f(0.0f,0.78f);
    glVertex2f(0.04f,0.77f);
    glVertex2f(0.07f,0.79f);
    glVertex2f(0.081f,0.8f);
    glEnd();

    glBegin(GL_TRIANGLES); //Back Side
    glColor3ub(0,0,0);

    glVertex2f(0.055f,0.8f);
    glVertex2f(0.03f,0.8f);
    glVertex2f(0.02f,0.84f);
    glEnd();


    glBegin(GL_TRIANGLES); //Front Side
    glColor3ub(0,0,0);

    glVertex2f(0.055f,0.8f);
    glVertex2f(0.024f,0.8f);
    glVertex2f(0.0f,0.83f);
    glEnd();

    //////////////////////////////////////////////////////////////
    //3rd Bird
    GLfloat mmmm=-0.638f; GLfloat nnnn=0.8f;

	glBegin(GL_TRIANGLE_FAN);//Face
    glColor3ub(0,0,0);

    glVertex2f(mmmm,nnnn); // center of circle
    for(i = 0; i <= triangleAmount;i++)
    {
        glVertex2f(mmmm + (radiusmmm * cos(i *  twicePi / triangleAmount)),nnnn + (radiusmmm * sin(i * twicePi / triangleAmount)));
    }
	glEnd();

	glBegin(GL_POLYGON); //Down Part
    glColor3ub(0,0,0);

    glVertex2f(-0.72f,0.8f);
    glVertex2f(-0.71f,0.79f);
    glVertex2f(-0.7f,0.78f);
    glVertex2f(-0.66f,0.77f);
    glVertex2f(-0.63f,0.79f);
    glVertex2f(-0.619f,0.8f);
    glEnd();

    glBegin(GL_TRIANGLES); //Back Side
    glColor3ub(0,0,0);

    glVertex2f(-0.645f,0.8f);
    glVertex2f(-0.67f,0.8f);
    glVertex2f(-0.68f,0.84f);
    glEnd();

    glBegin(GL_TRIANGLES); //Front Side
    glColor3ub(0,0,0);

    glVertex2f(-0.645f,0.8f);
    glVertex2f(-0.676f,0.8f);
    glVertex2f(-0.7f,0.83f);
    glEnd();

    ///////////////////////////////////////////////////
    //4th Bird
	GLfloat mmmmm=-0.518f; GLfloat nnnnn=0.8f;

	glBegin(GL_TRIANGLE_FAN);//Face
    glColor3ub(0,0,0);
    glVertex2f(mmmmm, nnnnn); // center of circle
    for(i = 0; i <= triangleAmount;i++)
    {
        glVertex2f(mmmmm + (radiusmm * cos(i *  twicePi / triangleAmount)),nnnnn + (radiusmm * sin(i * twicePi / triangleAmount)));
    }
	glEnd();
    glBegin(GL_POLYGON); //Down Part
    glColor3ub(0,0,0);

    glVertex2f(-0.6f,0.8f);
    glVertex2f(-0.59f,0.79f);
    glVertex2f(-0.58f,0.78f);
    glVertex2f(-0.54f,0.77f);
    glVertex2f(-0.51f,0.79f);
    glVertex2f(-0.499f,0.8f);
    glEnd();

    glBegin(GL_TRIANGLES); //Back Part
    glColor3ub(0,0,0);

    glVertex2f(-0.525f,0.8f);
    glVertex2f(-0.55f,0.8f);
    glVertex2f(-0.56f,0.84f);
    glEnd();


    glBegin(GL_TRIANGLES); //Front Part
    glColor3ub(0,0,0);

    glVertex2f(-0.525f,0.8f);
    glVertex2f(-0.556f,0.8f);
    glVertex2f(-0.58f,0.83f);
    glEnd();
}

GLfloat position4 = 0.0f;
GLfloat speed4 =-0.01f;

void sunn(int value)
{
   if(position4 > 1.0)
        position4 = 0.0f;

    position4 += speed4;
	glutPostRedisplay();
	glutTimerFunc(100, sunn, 0);
}

void sun()
{
    int i;

	GLfloat x=0.5f; GLfloat y=0.85f; GLfloat radius =.08f;
	int triangleAmount = 20;
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
    glColor3ub(252, 212, 64);

    glVertex2f(x, y); //center of circle
    for(i = 0; i <= triangleAmount;i++)
    {
        glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
    }
	glEnd();
}
GLfloat position3 = 90.0f;
GLfloat speed3 =- 0.5f;

void rain(int value)
{
    if(position3 <- 1.0)
        position3 = 1.0f;
    position3 += speed3;
	glutPostRedisplay();
	glutTimerFunc(100, rain, 0);
}

GLfloat position2 = 0.0f;
GLfloat speed2 = 0.004f;

void cloud(int value)
{
    if(position2 > 1.0)
        position2 =-1.0f;
    position2 += speed2;
	glutPostRedisplay();
	glutTimerFunc(100, cloud, 0);
}

void cloud1()
{
    int i;

	GLfloat x=.5f; GLfloat y=.8f; GLfloat radius =.05f;
	int triangleAmount = 20;
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 217, 255);
    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount;i++)
    {
        glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
    }
	glEnd();

    GLfloat a=.55f; GLfloat b=.78f;

	glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 217, 255);
    glVertex2f(a, b); // center of circle
    for(i = 0; i <= triangleAmount;i++)
    {
        glVertex2f(a + (radius * cos(i *  twicePi / triangleAmount)),b + (radius * sin(i * twicePi / triangleAmount)));
    }
	glEnd();

	GLfloat c=.45f; GLfloat d=.78f;

	glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 217, 255);
    glVertex2f(c, d); // center of circle
    for(i = 0; i <= triangleAmount;i++)
    {
        glVertex2f(c + (radius * cos(i *  twicePi / triangleAmount)),d + (radius * sin(i * twicePi / triangleAmount)));
    }
	glEnd();

	GLfloat e=.52f; GLfloat f=.75f;

	glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 217, 255);
    glVertex2f(e, f); // center of circle
    for(i = 0; i <= triangleAmount;i++)
    {
        glVertex2f(e + (radius * cos(i *  twicePi / triangleAmount)),f+ (radius * sin(i * twicePi / triangleAmount)));
    }
	glEnd();

	GLfloat g=.6f; GLfloat h=.78f;

	glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 217, 255);
    glVertex2f(g, h); // center of circle
    for(i = 0; i <= triangleAmount;i++)
    {
        glVertex2f(g + (radius * cos(i *  twicePi / triangleAmount)),h+ (radius * sin(i * twicePi / triangleAmount)));
    }
	glEnd();
}

void cloud2()
{
    int i;

	GLfloat x=-.5f; GLfloat y=.89f; GLfloat radius =.05f;
	int triangleAmount = 20;
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 217, 255);
    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount;i++)
    {
        glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
    }
	glEnd();

    GLfloat a=-.55f; GLfloat b=.86f;

	glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 217, 255);
    glVertex2f(a, b); // center of circle
    for(i = 0; i <= triangleAmount;i++)
    {
        glVertex2f(a + (radius * cos(i *  twicePi / triangleAmount)),b + (radius * sin(i * twicePi / triangleAmount)));
    }
	glEnd();

	GLfloat c=-.45f; GLfloat d=.86f;

	glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 217, 255);
    glVertex2f(c, d); // center of circle
    for(i = 0; i <= triangleAmount;i++)
    {
        glVertex2f(c + (radius * cos(i *  twicePi / triangleAmount)),d + (radius * sin(i * twicePi / triangleAmount)));
    }
	glEnd();

	GLfloat e=-.52f; GLfloat f=.83f;

	glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 217, 255);
    glVertex2f(e, f); // center of circle
    for(i = 0; i <= triangleAmount;i++)
    {
        glVertex2f(e + (radius * cos(i *  twicePi / triangleAmount)),f+ (radius * sin(i * twicePi / triangleAmount)));
    }
	glEnd();

	GLfloat g=-.6f; GLfloat h=.85f;

	glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 217, 255);
    glVertex2f(g, h); // center of circle
    for(i = 0; i <= triangleAmount;i++)
    {
        glVertex2f(g + (radius * cos(i *  twicePi / triangleAmount)),h+ (radius * sin(i * twicePi / triangleAmount)));
    }
	glEnd();
}
void cloud3()
{
    int i;

	GLfloat x=0.0f; GLfloat y=.76f; GLfloat radius =.05f;
	int triangleAmount = 20;
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 217, 255);
    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount;i++)
    {
        glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
    }
	glEnd();

    GLfloat a=.05f; GLfloat b=.73f;

	glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 217, 255);
    glVertex2f(a, b); // center of circle
    for(i = 0; i <= triangleAmount;i++)
    {
        glVertex2f(a + (radius * cos(i *  twicePi / triangleAmount)),b + (radius * sin(i * twicePi / triangleAmount)));
    }
	glEnd();

	GLfloat c=-0.05f; GLfloat d=.73f;

	glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 217, 255);
    glVertex2f(c, d); // center of circle
    for(i = 0; i <= triangleAmount;i++)
    {
        glVertex2f(c + (radius * cos(i *  twicePi / triangleAmount)),d + (radius * sin(i * twicePi / triangleAmount)));
    }
	glEnd();

	GLfloat e=.02f; GLfloat f=.7f;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 217, 255);
    glVertex2f(e, f); // center of circle
    for(i = 0; i <= triangleAmount;i++)
    {
        glVertex2f(e + (radius * cos(i *  twicePi / triangleAmount)),f+ (radius * sin(i * twicePi / triangleAmount)));
    }
	glEnd();

	GLfloat g=.1f; GLfloat h=.72f;

	glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 217, 255);
    glVertex2f(g, h); // center of circle
    for(i = 0; i <= triangleAmount;i++)
    {
        glVertex2f(g + (radius * cos(i *  twicePi / triangleAmount)),h+ (radius * sin(i * twicePi / triangleAmount)));
    }
	glEnd();
}
void cloud4()
{
    int i;

	GLfloat x=-.7f; GLfloat y=.69f; GLfloat radius =.05f;
	int triangleAmount = 20;
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 217, 255);
    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount;i++)
    {
        glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
    }
	glEnd();

    GLfloat a=-.75f; GLfloat b=.66f;

	glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 217, 255);
    glVertex2f(a, b); // center of circle
    for(i = 0; i <= triangleAmount;i++)
    {
        glVertex2f(a + (radius * cos(i *  twicePi / triangleAmount)),b + (radius * sin(i * twicePi / triangleAmount)));
    }
	glEnd();

	GLfloat c=-.65f; GLfloat d=.66f;

	glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 217, 255);
    glVertex2f(c, d); // center of circle
    for(i = 0; i <= triangleAmount;i++)
    {
        glVertex2f(c + (radius * cos(i *  twicePi / triangleAmount)),d + (radius * sin(i * twicePi / triangleAmount)));
    }
	glEnd();

	GLfloat e=-.72f; GLfloat f=.63f;

	glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 217, 255);
    glVertex2f(e, f); // center of circle
    for(i = 0; i <= triangleAmount;i++)
    {
        glVertex2f(e + (radius * cos(i *  twicePi / triangleAmount)),f+ (radius * sin(i * twicePi / triangleAmount)));
    }
	glEnd();

	GLfloat g=-.8f; GLfloat h=.65f;

	glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 217, 255);
    glVertex2f(g, h); // center of circle
    for(i = 0; i <= triangleAmount;i++)
    {
        glVertex2f(g + (radius * cos(i *  twicePi / triangleAmount)),h+ (radius * sin(i * twicePi / triangleAmount)));
    }
	glEnd();
}
void sky()
{
    glBegin(GL_QUADS);
    glColor3ub(51, 204, 255);

	glVertex2f(-1.0f, 0.45f);
	glVertex2f(1.0f, 0.45f);
    glVertex2f(1.0f, 1.0f);
	glVertex2f(-1.0f, 1.0f);
    glEnd();
}
void sky2()
{
    glBegin(GL_QUADS);
    glColor3ub(0, 51, 204);

	glVertex2f(-1.0f, 0.45f);
	glVertex2f(1.0f, 0.45f);
    glVertex2f(1.0f, 1.0f);
	glVertex2f(-1.0f, 1.0f);
    glEnd();
}

void stars()
{
    glPointSize( 3.5 );
    glBegin(GL_POINTS);
    glColor3ub(255, 255, 255);

    glVertex2f(0.8f,0.95f);
    glVertex2f(0.9f,0.9f);
    glVertex2f(0.95f,0.7f);
    glVertex2f(0.8f,0.8f);
    glVertex2f(0.7f,0.9f);
    glVertex2f(0.6f,0.8f);
    glVertex2f(0.5f,0.75f);
    glVertex2f(0.4f,0.9f);
    glVertex2f(0.3f,0.7f);
    glVertex2f(0.25f,0.9f);
    glVertex2f(0.25f,0.7f);
    glVertex2f(0.1f,0.9f);
    glVertex2f(0.15f,0.75f);
    glVertex2f(0.0f,0.8f);
    glVertex2f(-0.7f,0.9f);
    glVertex2f(-0.8f,0.95f);
    glVertex2f(-0.4f,0.8f);
    glVertex2f(-0.8f,0.95f);
    glVertex2f(-0.9f,0.9f);
    glVertex2f(-0.95f,0.7f);
    glVertex2f(-0.8f,0.8f);
    glVertex2f(-0.7f,0.9f);
    glVertex2f(-0.6f,0.8f);
    glVertex2f(-0.5f,0.75f);
    glVertex2f(-0.4f,0.9f);
    glVertex2f(-0.3f,0.7f);
    glVertex2f(-0.25f,0.9f);
    glVertex2f(-0.25f,0.7f);
    glVertex2f(-0.15f,0.75f);
    glVertex2f(-0.1f,0.9f);

    glEnd();
}

void moon()
{
    int i;

    GLfloat xx=-.5f; GLfloat yx=.93f; GLfloat radiusx =.06f;
    int triangleAmount = 20;
	GLfloat twicePi = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 51, 204);
    glVertex2f(xx, yx); // center of circle
    for(i = 0; i <= triangleAmount;i++)
    {
        glVertex2f(xx + (radiusx * cos(i *  twicePi / triangleAmount)),yx + (radiusx * sin(i * twicePi / triangleAmount)));
    }
	glEnd();

	GLfloat x=-.5f; GLfloat y=.9f; GLfloat radius =.06f;

	glBegin(GL_TRIANGLE_FAN);
    glColor3ub(242, 242, 242);
    glVertex2f(x, y); //center of circle
    for(i = 0; i <= triangleAmount;i++)
    {
        glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
    }
	glEnd();
}
void backgroundtree() //Sky Trees
{
    glBegin(GL_POLYGON);
	glColor3ub(102, 51, 0);

	glVertex2f(-0.52f,0.45f);
	glVertex2f(-0.48f, 0.45f);
	glVertex2f(-0.48f,0.62f);
    glVertex2f(-0.5f,0.64f);
    glVertex2f(-0.52f,0.62f);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(34,139,34);

    glVertex2f(-0.5f,0.64f);
    glVertex2f(-0.52f,0.62f);
    glVertex2f(-0.58f,0.6f);
	glVertex2f(-0.55f, 0.63f);
	glVertex2f(-0.58f,0.66f);
	glVertex2f(-0.52f,0.66f);
	glVertex2f(-0.52f, 0.72f);
	glVertex2f(-0.5f,0.69f);
	glVertex2f(-0.48f,0.72f);
	glVertex2f(-0.48f, 0.66f);
	glVertex2f(-0.42f,0.66f);
	glVertex2f(-0.45f,0.63f);
	glVertex2f(-0.42f, 0.6f);
	glVertex2f(-0.48f,0.62f);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(102, 51, 0);

	glVertex2f(0.52f,0.45f);
	glVertex2f(0.48f, 0.45f);
	glVertex2f(0.48f,0.62f);
    glVertex2f(0.5f,0.64f);
    glVertex2f(0.52f,0.62f);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(34,139,34);

    glVertex2f(0.5f,0.64f);
    glVertex2f(0.52f,0.62f);
    glVertex2f(0.58f,0.6f);
	glVertex2f(0.55f, 0.63f);
	glVertex2f(0.58f,0.66f);
	glVertex2f(0.52f,0.66f);
	glVertex2f(0.52f, 0.72f);
	glVertex2f(0.5f,0.69f);
	glVertex2f(0.48f,0.72f);
	glVertex2f(0.48f, 0.66f);
	glVertex2f(0.42f,0.66f);
	glVertex2f(0.45f,0.63f);
	glVertex2f(0.42f, 0.6f);
	glVertex2f(0.48f,0.62f);
    glEnd();

  	glBegin(GL_POLYGON);
	//glColor3ub(34,139,34);
	glColor3ub(0,51,0);

	glVertex2f(-1.0f,0.45f);
	glVertex2f(-0.98f, 0.5f);
    glVertex2f(-0.93f, 0.56);
    glVertex2f(-0.9f,0.6f);
    glVertex2f(-0.82f, 0.64);
    glVertex2f(-0.75f, 0.67);
    glVertex2f(-0.68f, 0.64);
    glVertex2f(-0.6f,0.6f);
    glVertex2f(-0.57f, 0.56);
    glVertex2f(-0.52f, 0.5f);
    glVertex2f(-0.5f,0.45f);
    glVertex2f(-1.0f,0.45f);
	glEnd();

	glBegin(GL_POLYGON);
	//glColor3ub(34,139,34);
	glColor3ub(0,51,0);

	glVertex2f(1.0f,0.45f);
	glVertex2f(0.98f, 0.5f);
    glVertex2f(0.93f, 0.56);
    glVertex2f(0.9f,0.6f);
    glVertex2f(0.82f, 0.64);
    glVertex2f(0.75f, 0.67);
    glVertex2f(0.68f, 0.64);
    glVertex2f(0.6f,0.6f);
    glVertex2f(0.57f, 0.56);
    glVertex2f(0.52f, 0.5f);
    glVertex2f(0.5f,0.45f);
    glVertex2f(1.0f,0.45f);
	glEnd();

	glBegin(GL_POLYGON);
	//glColor3ub(34,139,34);
	glColor3ub(0,51,0);

	glVertex2f(-0.5f,0.45f);
	glVertex2f(-0.48f, 0.5f);
    glVertex2f(-0.45f, 0.56);
    glVertex2f(-0.42f,0.6f);
    glVertex2f(-0.37f, 0.62);
    glVertex2f(-0.32f, 0.6);
    glVertex2f(-0.29f, 0.56f);
    glVertex2f(-0.27f, 0.5f);
    glVertex2f(-0.25f,0.45f);
    glEnd();

    glBegin(GL_POLYGON);
	//glColor3ub(34,139,34);
	glColor3ub(0,51,0);

	glVertex2f(0.5f,0.45f);
	glVertex2f(0.48f, 0.5f);
    glVertex2f(0.45f, 0.56);
    glVertex2f(0.42f,0.6f);
    glVertex2f(0.37f, 0.62);
    glVertex2f(0.32f, 0.6);
    glVertex2f(0.29f, 0.56f);
    glVertex2f(0.27f, 0.5f);
    glVertex2f(0.25f,0.45f);
    glEnd();

    glBegin(GL_POLYGON);
	//glColor3ub(34,139,34);
	glColor3ub(0,51,0);

	glVertex2f(-.25f,0.45f);
	glVertex2f(-0.23f, 0.5f);
    glVertex2f(-0.18f, 0.56);
    glVertex2f(-0.15f,0.6f);
    glVertex2f(-0.07f, 0.64);
    glVertex2f(-0.00f, 0.67);
    glVertex2f(0.07f, 0.64);
    glVertex2f(0.15f,0.6f);
    glVertex2f(0.18f, 0.56);
    glVertex2f(0.23f, 0.5f);
    glVertex2f(.25f,0.45f);
	glEnd();
}

void ground()
{
    glBegin(GL_POLYGON);
	//glColor3ub(102, 255, 51);
	glColor3f(0.420,0.557,0.137);

	glVertex2f(-1.0f,-1.0f);
	glVertex2f(-1.0f,0.0f);
	glVertex2f(0.0f, 0.0f);
    glVertex2f(0.1f, -0.03);
    glVertex2f(0.2f, -0.07);
    glVertex2f(0.3f, -0.1);//6
    glVertex2f(0.2f, -0.13);
    glVertex2f(0.1f, -0.17);
    glVertex2f(0.2f, -0.2);
    glVertex2f(0.35f, -0.23);
    glVertex2f(0.25f, -0.25);
    glVertex2f(0.18f, -0.28);//12
    glVertex2f(0.3f, -0.32);
    glVertex2f(0.2f, -0.35);
    glVertex2f(0.4f, -0.4);
    glVertex2f(0.4f, -0.6);
    glVertex2f(0.2f, -0.65);
    glVertex2f(0.3f, -0.7);
    glVertex2f(0.2f, -0.75);
    glVertex2f(0.4f, -0.8);
    glVertex2f(0.2f, -0.85);
    glVertex2f(0.35f, -0.9);
    glVertex2f(0.25f, -0.95);
    glVertex2f(0.4f, -1.0);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(153, 153, 102);
    glVertex2f(0.17f, -0.19);
    glVertex2f(0.19f, -0.2f);
    glVertex2f(0.3f, -0.12f);
    glVertex2f(0.3f, -0.1);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(153, 153, 102);
    glVertex2f(0.23f, -0.295);
    glVertex2f(0.25f, -0.305f);
    glVertex2f(0.35f, -0.25f);
	glVertex2f(0.35f, -0.23);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(153, 153, 102);
	glVertex2f(0.3f, -0.32);
	glVertex2f(0.3f, -0.34);
    glVertex2f(0.25f, -0.365f);
    glVertex2f(0.2f, -0.35);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(153, 153, 102);
	glVertex2f(0.205f, -0.655);
	glVertex2f(0.4f, -0.6);
	glVertex2f(0.4f, -0.625);
	glVertex2f(0.25f, -0.675);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(153, 153, 102);
	glVertex2f(0.3f, -0.7);
	glVertex2f(0.3f, -0.72);
	glVertex2f(0.24f, -0.7595);
    glVertex2f(0.2f, -0.75);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(153, 153, 102);
	glVertex2f(0.4f, -0.8);
	glVertex2f(0.4f, -0.825);
	glVertex2f(0.24f, -0.865);
    glVertex2f(0.2f, -0.85);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(153, 153, 102);
	glVertex2f(0.35f, -0.9);
	glVertex2f(0.35f, -0.925);
	glVertex2f(0.27f, -0.958);
    glVertex2f(0.25f, -0.948);
    glEnd();

    glColor3f(0.9,0.2,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(100,135);
    glVertex2f(100,285);
    glVertex2f(140,285);
    glVertex2f(140,135);
    glEnd();
}
void tree()
{
    glBegin(GL_POLYGON);
    glColor3ub(102, 51, 0);

    glVertex2f(-0.72f,-0.15f);
    glVertex2f(-0.65f,-0.2f);
    glVertex2f(-0.735f,-0.17f);
    glVertex2f(-0.74f,-0.25f);
    glVertex2f(-0.775f,-0.17f);
    glVertex2f(-0.85f,-0.2f);
    glVertex2f(-0.78f,-0.15f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(102, 51, 0);

    glVertex2f(-0.78f,-0.15f);
    glVertex2f(-0.78f,0.23f);
    glVertex2f(-0.72f,0.23f);
    glVertex2f(-0.72f,-0.15f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(102, 51, 0);

    glVertex2f(-0.76f,0.23f);
    glVertex2f(-0.76f,0.3f);
    glVertex2f(-0.74f,0.3f);
    glVertex2f(-0.74f,0.23f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(102, 51, 0);

    glVertex2f(-0.74f,0.23f);
    glVertex2f(-0.71f,0.29f);
    glVertex2f(-0.7f,0.28f);
    glVertex2f(-0.72f,0.23f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(102, 51, 0);

    glVertex2f(-0.78f,0.23f);
    glVertex2f(-0.8f,0.28f);
    glVertex2f(-0.79f,0.29f);
    glVertex2f(-0.76f,0.23f);
    glEnd();

    int i;

	GLfloat x=-.75f; GLfloat y=.33f; GLfloat radius =.06f;
	int triangleAmount = 20;
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
    glColor3ub(51, 204, 51);
    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount;i++)
    {
        glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)));
    }
	glEnd();

    GLfloat a=-.68f; GLfloat b=.31f;

	glBegin(GL_TRIANGLE_FAN);
    glColor3ub(51, 204, 51);
    glVertex2f(a, b); // center of circle
    for(i = 0; i <= triangleAmount;i++)
    {
        glVertex2f(a + (radius * cos(i *  twicePi / triangleAmount)),b + (radius * sin(i * twicePi / triangleAmount)));
    }
	glEnd();

	GLfloat c=-.81f; GLfloat d=.31f;

	glBegin(GL_TRIANGLE_FAN);
    glColor3ub(51, 204, 51);
    glVertex2f(c, d); // center of circle
    for(i = 0; i <= triangleAmount;i++)
    {
        glVertex2f(c + (radius * cos(i *  twicePi / triangleAmount)),d + (radius * sin(i * twicePi / triangleAmount)));
    }
	glEnd();

	GLfloat e=-.87f; GLfloat f=.35f;

	glBegin(GL_TRIANGLE_FAN);
    glColor3ub(51, 204, 51);
    glVertex2f(e, f); // center of circle
    for(i = 0; i <= triangleAmount;i++)
    {
        glVertex2f(e + (radius * cos(i *  twicePi / triangleAmount)),f+ (radius * sin(i * twicePi / triangleAmount)));
    }
	glEnd();

	GLfloat g=-.61f; GLfloat h=.35f;

	glBegin(GL_TRIANGLE_FAN);
    glColor3ub(51, 204, 51);
    glVertex2f(g, h); // center of circle
    for(i = 0; i <= triangleAmount;i++)
    {
        glVertex2f(g + (radius * cos(i *  twicePi / triangleAmount)),h+ (radius * sin(i * twicePi / triangleAmount)));
    }
	glEnd();
	GLfloat a1=-.61f; GLfloat b1=.4f;

	glBegin(GL_TRIANGLE_FAN);
    glColor3ub(51, 204, 51);
    glVertex2f(a1, b1); // center of circle
    for(i = 0; i <= triangleAmount;i++)
    {
        glVertex2f(a1 + (radius * cos(i *  twicePi / triangleAmount)),b1 + (radius * sin(i * twicePi / triangleAmount)));
    }
	glEnd();

	GLfloat c1=-.88f; GLfloat d1=.4f;

	glBegin(GL_TRIANGLE_FAN);
    glColor3ub(51, 204, 51);
    glVertex2f(c, d); // center of circle
    for(i = 0; i <= triangleAmount;i++)
    {
        glVertex2f(c1 + (radius * cos(i *  twicePi / triangleAmount)),d1 + (radius * sin(i * twicePi / triangleAmount)));
    }
	glEnd();

	GLfloat e1=-.87f; GLfloat f1=.44f;

	glBegin(GL_TRIANGLE_FAN);
    glColor3ub(51, 204, 51);
    glVertex2f(e1, f1); // center of circle
    for(i = 0; i <= triangleAmount;i++)
    {
        glVertex2f(e1 + (radius * cos(i *  twicePi / triangleAmount)),f1+ (radius * sin(i * twicePi / triangleAmount)));
    }
	glEnd();

	GLfloat g1=-.61f; GLfloat h1=.4f;

	glBegin(GL_TRIANGLE_FAN);
    glColor3ub(51, 204, 51);
    glVertex2f(g, h); // center of circle
    for(i = 0; i <= triangleAmount;i++)
    {
        glVertex2f(g1 + (radius * cos(i *  twicePi / triangleAmount)),h1+ (radius * sin(i * twicePi / triangleAmount)));
    }
	glEnd();
	GLfloat e11=-.64f; GLfloat f11=.44f;

	glBegin(GL_TRIANGLE_FAN);
    glColor3ub(51, 204, 51);
    glVertex2f(e11, f11); // center of circle
    for(i = 0; i <= triangleAmount;i++)
    {
        glVertex2f(e11 + (radius * cos(i *  twicePi / triangleAmount)),f11+ (radius * sin(i * twicePi / triangleAmount)));
    }
	glEnd();

	GLfloat e12=-.75f; GLfloat f12=.44f;

	glBegin(GL_TRIANGLE_FAN);
    glColor3ub(51, 204, 51);
    glVertex2f(e12, f12); // center of circle
    for(i = 0; i <= triangleAmount;i++)
    {
        glVertex2f(e12 + (radius * cos(i *  twicePi / triangleAmount)),f12+ (radius * sin(i * twicePi / triangleAmount)));
    }
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(51, 204, 51);
    glVertex2f(-0.85f,0.33f);
    glVertex2f(-0.85f,0.44f);
    glVertex2f(-0.65f,0.44f);
    glVertex2f(-0.65f,0.33f);
    glEnd();

    GLfloat e123=-.8f; GLfloat f123=.5f;

	glBegin(GL_TRIANGLE_FAN);
    glColor3ub(51, 204, 51);
    glVertex2f(e123, f123); // center of circle
    for(i = 0; i <= triangleAmount;i++)
    {
        glVertex2f(e123 + (radius * cos(i *  twicePi / triangleAmount)),f123+ (radius * sin(i * twicePi / triangleAmount)));
    }
	glEnd();
	GLfloat e1232=-.7f; GLfloat f1232=.5f;

	glBegin(GL_TRIANGLE_FAN);
    glColor3ub(51, 204, 51);
    glVertex2f(e1232, f1232); // center of circle
    for(i = 0; i <= triangleAmount;i++)
    {
        glVertex2f(e1232 + (radius * cos(i *  twicePi / triangleAmount)),f1232+ (radius * sin(i * twicePi / triangleAmount)));
    }
	glEnd();
}
void hut()
{
    glBegin(GL_POLYGON);
    glColor3ub(204, 153, 0);

    glVertex2f(-0.5f,0.2f);
    glVertex2f(-0.1f,0.2f);
    glVertex2f(-0.18f,0.5f);
    glVertex2f(-0.58f,0.5f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(204, 153, 0);

    glVertex2f(-0.49f,0.2f);
    glVertex2f(-0.13f,0.2f);
    glVertex2f(-0.13f,-0.2f);
    glVertex2f(-0.49f,-0.2f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(204, 153, 0);

    glVertex2f(-0.58f,0.5f);
    glVertex2f(-0.63f,0.2f);
    glVertex2f(-0.61f,0.2f);
    glVertex2f(-0.61f,-0.15f);
    glVertex2f(-0.49f,-0.2f);
    glVertex2f(-0.17f,-0.2f);

    glEnd();
    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);

    glVertex2f(-0.5f,0.2f);
    glVertex2f(-0.1f,0.2f);

    glColor3ub(0,0,0);
    glVertex2f(-0.49f,0.2f);
    glVertex2f(-0.49f,-0.2f);

    glColor3ub(0,0,0);
    glVertex2f(-0.13f,-0.2f);
    glVertex2f(-0.49f,-0.2f);

    glColor3ub(0,0,0);
    glVertex2f(-0.13f,-0.2f);
    glVertex2f(-0.13f,0.2f);

    glColor3ub(0,0,0);
    glVertex2f(-0.5f,0.2f);
    glVertex2f(-0.58f,0.5f);

    glColor3ub(0,0,0);
    glVertex2f(-0.58f,0.5f);
    glVertex2f(-0.63f,0.2f);

    glColor3ub(0,0,0);
    glVertex2f(-0.57f,0.445f);
    glVertex2f(-0.61f,0.2f);

    glColor3ub(0,0,0);
    glVertex2f(-0.61f,0.2f);
    glVertex2f(-0.61f,-0.15f);

    glColor3ub(0,0,0);
    glVertex2f(-0.61f,-0.15f);
    glVertex2f(-0.49f,-0.2f);

    glColor3ub(0,0,0);
    glVertex2f(-0.1f,0.2f);
    glVertex2f(-0.18f,0.5f);

    glColor3ub(0,0,0);
    glVertex2f(-0.18f,0.5f);
    glVertex2f(-0.58f,0.5f);

    glEnd();

    glBegin(GL_POLYGON); //Main Door
    glColor3ub(139,69,19);

    glVertex2f(-0.35f,0.1f);
    glVertex2f(-0.22f,0.1f);
    glVertex2f(-0.22f,-0.2f);
    glVertex2f(-0.35f,-0.2f);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);

    glColor3ub(0,0,0);
    glVertex2f(-0.35f,0.1f);
    glVertex2f(-0.22f,0.1f);
    glVertex2f(-0.22f,0.1f);
    glVertex2f(-0.22f,-0.2f);
    glVertex2f(-0.35f,0.1f);
    glVertex2f(-0.35f,-0.2f);
    glVertex2f(-0.285f,0.1f);
    glVertex2f(-0.285f,-0.2f);
    glEnd();

    glBegin(GL_POLYGON); //Left Window
    //glColor3ub(153, 115, 0);
    glColor3ub(255,255,51);

    glVertex2f(-0.44f,0.05f);
    glVertex2f(-0.38f,0.05f);
    glVertex2f(-0.38f,-0.05f);
    glVertex2f(-0.44f,-0.05f);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);

    glColor3ub(0,0,0);
    glVertex2f(-0.44f,0.05f);
    glVertex2f(-0.44f,-0.05f);
    glVertex2f(-0.38f,0.05f);
    glVertex2f(-0.38f,-0.05f);
    glVertex2f(-0.44f,0.05f);
    glVertex2f(-0.38f,0.05f);
    glVertex2f(-0.44f,-0.05f);
    glVertex2f(-0.38f,-0.05f);
    glVertex2f(-0.41f,0.05f);
    glVertex2f(-0.41f,-0.05f);
    glEnd();

    glBegin(GL_POLYGON); //Second Door
    glColor3ub(139,69,19);

    glVertex2f(-0.51f,0.12f);
    glVertex2f(-0.58f,0.14f);
    glVertex2f(-0.58f,-0.17f);
    glVertex2f(-0.51f,-0.2f);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);

    glColor3ub(0,0,0);
    glVertex2f(-0.58f,0.14f);
    glVertex2f(-0.58f,-0.17f);
    glVertex2f(-0.51f,0.12f);
    glVertex2f(-0.51f,-0.2f);
    glVertex2f(-0.58f,0.14f);
    glVertex2f(-0.51f,0.12f);
    glVertex2f(-0.545f,0.13f);
    glVertex2f(-0.545f,-0.185f);
    glEnd();

    glBegin(GL_POLYGON); //Right Window
    //glColor3ub(153, 115, 0);
    glColor3ub(255,255,51);
    glVertex2f(-0.14f,0.05f);
    glVertex2f(-0.2f,0.05f);
    glVertex2f(-0.2f,-0.05f);
    glVertex2f(-0.14f,-0.05f);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);

    glColor3ub(0,0,0);
    glVertex2f(-0.14f,0.05f);
    glVertex2f(-0.14f,-0.05f);
    glVertex2f(-0.2f,0.05f);
    glVertex2f(-0.2f,-0.05f);
    glVertex2f(-0.14f,0.05f);
    glVertex2f(-0.2f,0.05f);
    glVertex2f(-0.14f,-0.05f);
    glVertex2f(-0.2f,-0.05f);
    glVertex2f(-0.17f,0.05f);
    glVertex2f(-0.17f,-0.05f);
    glEnd();
}
void hut1()
{
    glLineWidth(2);
    glBegin(GL_LINES);

    glColor3ub(0,0,0);
    glVertex2f(-0.35f,0.1f);
    glVertex2f(-0.22f,0.1f);
    glVertex2f(-0.22f,0.1f);
    glVertex2f(-0.22f,-0.2f);
    glVertex2f(-0.35f,0.1f);
    glVertex2f(-0.35f,-0.2f);
    glVertex2f(-0.285f,0.1f);
    glVertex2f(-0.285f,-0.2f);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);

    glColor3ub(0,0,0);
    glVertex2f(-0.35f,0.1f);
    glVertex2f(-0.22f,0.1f);
    glVertex2f(-0.22f,0.1f);
    glVertex2f(-0.22f,-0.2f);
    glVertex2f(-0.35f,0.1f);
    glVertex2f(-0.35f,-0.2f);
    glVertex2f(-0.285f,0.1f);
    glVertex2f(-0.285f,-0.2f);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);

    glColor3ub(0,0,0);
    glVertex2f(-0.44f,0.05f);
    glVertex2f(-0.44f,-0.05f);
    glVertex2f(-0.38f,0.05f);
    glVertex2f(-0.38f,-0.05f);
    glVertex2f(-0.44f,0.05f);
    glVertex2f(-0.38f,0.05f);
    glVertex2f(-0.44f,-0.05f);
    glVertex2f(-0.38f,-0.05f);
    glVertex2f(-0.41f,0.05f);
    glVertex2f(-0.41f,-0.05f);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);

    glColor3ub(0,0,0);
    glVertex2f(-0.58f,0.14f);
    glVertex2f(-0.58f,-0.17f);
    glVertex2f(-0.51f,0.12f);
    glVertex2f(-0.51f,-0.2f);
    glVertex2f(-0.58f,0.14f);
    glVertex2f(-0.51f,0.12f);
    glVertex2f(-0.545f,0.13f);
    glVertex2f(-0.545f,-0.185f);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);

    glColor3ub(0,0,0);
    glVertex2f(-0.14f,0.05f);
    glVertex2f(-0.14f,-0.05f);
    glVertex2f(-0.2f,0.05f);
    glVertex2f(-0.2f,-0.05f);
    glVertex2f(-0.14f,0.05f);
    glVertex2f(-0.2f,0.05f);
    glVertex2f(-0.14f,-0.05f);
    glVertex2f(-0.2f,-0.05f);
    glVertex2f(-0.17f,0.05f);
    glVertex2f(-0.17f,-0.05f);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);

    glColor3ub(0,0,0);
    glVertex2f(-0.5f,0.2f);
    glVertex2f(-0.1f,0.2f);
    glVertex2f(-0.49f,0.2f);
    glVertex2f(-0.49f,-0.2f);
    glVertex2f(-0.13f,-0.2f);
    glVertex2f(-0.49f,-0.2f);
    glVertex2f(-0.13f,-0.2f);
    glVertex2f(-0.13f,0.2f);
    glVertex2f(-0.5f,0.2f);
    glVertex2f(-0.58f,0.5f);
    glVertex2f(-0.58f,0.5f);
    glVertex2f(-0.63f,0.2f);
    glVertex2f(-0.57f,0.445f);
    glVertex2f(-0.61f,0.2f);
    glVertex2f(-0.61f,0.2f);
    glVertex2f(-0.61f,-0.15f);
    glVertex2f(-0.61f,-0.15f);
    glVertex2f(-0.49f,-0.2f);
    glVertex2f(-0.1f,0.2f);
    glVertex2f(-0.18f,0.5f);
    glVertex2f(-0.18f,0.5f);
    glVertex2f(-0.58f,0.5f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(204, 153, 0);
    glVertex2f(-0.5f,0.2f);
    glVertex2f(-0.1f,0.2f);
    glVertex2f(-0.18f,0.5f);
    glVertex2f(-0.58f,0.5f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(204, 153, 0);
    glVertex2f(-0.49f,0.2f);
    glVertex2f(-0.13f,0.2f);
    glVertex2f(-0.13f,-0.2f);
    glVertex2f(-0.49f,-0.2f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(204, 153, 0);

    glVertex2f(-0.58f,0.5f);
    glVertex2f(-0.63f,0.2f);
    glVertex2f(-0.61f,0.2f);
    glVertex2f(-0.61f,-0.15f);
    glVertex2f(-0.49f,-0.2f);
    glVertex2f(-0.17f,-0.2f);
    glEnd();
}
void Straw()
{
    glBegin(GL_POLYGON);
	glColor3ub(139,69,19);

	glVertex2f(-0.2f, -0.1f);
	glVertex2f(0.1f, -0.1f);
	glVertex2f(0.1f, 0.1f);
	glVertex2f(0.07f, 0.15f);
	glVertex2f(0.02f, 0.22f);
	glVertex2f(-0.05f, 0.27f);
	glVertex2f(-0.12f, 0.22f);
	glVertex2f(-0.17f, 0.15f);
	glVertex2f(-0.2f, 0.1f);
	glEnd();

	glLineWidth(5);
    glBegin(GL_LINES);
    glColor3ub(255, 219, 77);
	glVertex2f(-0.05f, 0.27f);
	glVertex2f(-0.05f, 0.31f);
    glEnd();
}

void fence()
{
    glLineWidth(4);
    glBegin(GL_LINES);
    glColor3ub(255, 255, 102);
    glVertex2f(-1.0f,-0.1f);
    glVertex2f(-0.6f,-0.1f);

    glColor3ub(255, 255, 102);
    glVertex2f(-1.0f,-0.05f);
    glVertex2f(-0.6f,-0.05f);

    glColor3ub(255, 255, 102);
    glVertex2f(-1.0f,0.0f);
    glVertex2f(-0.6f,0.0f);

    glColor3ub(255, 255, 102);
    glVertex2f(-1.0f,0.05f);
    glVertex2f(-0.6f,0.05f);

    glColor3ub(255, 255, 102);
    glVertex2f(-1.0f,0.1f);
    glVertex2f(-0.6f,0.1f);

    glColor3ub(255, 255, 102);
    glVertex2f(-0.95f,0.13f);
    glVertex2f(-0.95f,-0.12f);

    glColor3ub(255, 255, 102);
    glVertex2f(-0.9f,0.13f);
    glVertex2f(-0.9f,-0.12f);

    glColor3ub(255, 255, 102);
    glVertex2f(-0.85f,0.13f);
    glVertex2f(-0.85f,-0.12f);

    glColor3ub(255, 255, 102);
    glVertex2f(-0.8f,0.13f);
    glVertex2f(-0.8f,-0.12f);

    glColor3ub(255, 255, 102);
    glVertex2f(-0.75f,0.13f);
    glVertex2f(-0.75f,-0.12f);

    glColor3ub(255, 255, 102);
    glVertex2f(-0.7f,0.13f);
    glVertex2f(-0.7f,-0.12f);

    glColor3ub(255, 255, 102);
    glVertex2f(-0.65f,0.13f);
    glVertex2f(-0.65f,-0.12f);

    glEnd();
}
void way()
{
    glBegin(GL_QUADS);
    glColor3ub(153, 153, 102);
    glVertex2f(-0.35f,-0.2f);
    glVertex2f(-0.22f,-0.2f);
    glVertex2f(-0.28f,-0.5f);
    glVertex2f(-0.43f,-0.5f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(153, 153, 102);
    glVertex2f(-0.43f,-0.5f);
    glVertex2f(-0.75f,-1.0f);
    glVertex2f(-0.56f,-1.0f);
    glVertex2f(-0.28f,-0.5f);
    glEnd();
}

void well()
{
    glBegin(GL_POLYGON);
    glColor3ub(204, 51, 0);
    glVertex2f(-0.9f,-0.35f);
    glVertex2f(-0.9f,-0.55f);
    glVertex2f(-0.85f,-0.575f);
    glVertex2f(-0.8f,-0.59f);
    glVertex2f(-0.7f,-0.59f);
    glVertex2f(-0.65f,-0.575f);
    glVertex2f(-0.6f,-0.55f);
    glVertex2f(-0.6f,-0.35f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255, 102, 51);
    glVertex2f(-0.9f,-0.35f);
    glVertex2f(-0.85f,-0.375f);
    glVertex2f(-0.8f,-0.38f);
    glVertex2f(-0.7f,-0.38f);
    glVertex2f(-0.65f,-0.375f);
    glVertex2f(-0.6f,-0.35f);
    glVertex2f(-0.65f,-0.33f);
    glVertex2f(-0.7f,-0.325f);
    glVertex2f(-0.8f,-0.325f);
    glVertex2f(-0.85f,-0.33f);
    glEnd();

    glLineWidth(5);
    glBegin(GL_LINES);
    glColor3ub(204, 51, 0);
    glVertex2f(-0.9f,-0.35f);
    glVertex2f(-0.85f,-0.33f);//
    glVertex2f(-0.85f,-0.33f);
    glVertex2f(-0.8f,-0.325f);//
    glVertex2f(-0.8f,-0.325f);
    glVertex2f(-0.7f,-0.325f);//
    glVertex2f(-0.7f,-0.325f);
    glVertex2f(-0.65f,-0.33f);//
    glVertex2f(-0.65f,-0.33f);
    glVertex2f(-0.6f,-0.35f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(194, 194, 163);
    glVertex2f(-0.59f,-0.43f);
    glVertex2f(-0.57f,-0.5f);
    glVertex2f(-0.52f,-0.5f);
    glVertex2f(-0.5f,-0.43f);
    glVertex2f(-0.52f,-0.42f);
    glVertex2f(-0.57f,-0.42f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(38, 154, 214);
    glVertex2f(-0.585f,-0.43f);
    glVertex2f(-0.568f,-0.44f);
    glVertex2f(-0.528f,-0.44f);
    glVertex2f(-0.505f,-0.43f);
    glVertex2f(-0.528f,-0.425f);
    glVertex2f(-0.57f,-0.425f);
    glEnd();

    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3ub(194, 194, 163);
    glVertex2f(-0.59f,-0.43f);
    glVertex2f(-0.57f,-0.39f);//
    glVertex2f(-0.57f,-0.39f);
    glVertex2f(-0.55f,-0.39f);//
    glVertex2f(-0.55f,-0.39f);
    glVertex2f(-0.52f,-0.39f);//
    glVertex2f(-0.52f,-0.39f);
    glVertex2f(-0.5f,-0.43f);//
    glEnd();

    glLineWidth(2.5);
    glBegin(GL_LINES);
    glColor3ub(230, 172, 0);
    glVertex2f(-0.545f,-0.385f);
    glVertex2f(-0.57f,-0.45f);//
    glVertex2f(-0.57f,-0.45f);
    glVertex2f(-0.575f,-0.5f);//
    glVertex2f(-0.575f,-0.5f);
    glVertex2f(-0.58f,-0.53f);//
    glVertex2f(-0.58f,-0.53f);
    glVertex2f(-0.57f,-0.55f);//
    glVertex2f(-0.57f,-0.55f);
    glVertex2f(-0.48f,-0.53f);//
    glEnd();
}
void well1()
{
    glLineWidth(5);
    glBegin(GL_LINES);
    glColor3ub(204, 51, 0);
    glVertex2f(-0.9f,-0.35f);
    glVertex2f(-0.85f,-0.33f);//
    glVertex2f(-0.85f,-0.33f);
    glVertex2f(-0.8f,-0.325f);//
    glVertex2f(-0.8f,-0.325f);
    glVertex2f(-0.7f,-0.325f);//
    glVertex2f(-0.7f,-0.325f);
    glVertex2f(-0.65f,-0.33f);//
    glVertex2f(-0.65f,-0.33f);
    glVertex2f(-0.6f,-0.35f);
    glEnd();

    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3ub(194, 194, 163);
    glVertex2f(-0.59f,-0.43f);
    glVertex2f(-0.57f,-0.39f);//
    glVertex2f(-0.57f,-0.39f);
    glVertex2f(-0.55f,-0.39f);//
    glVertex2f(-0.55f,-0.39f);
    glVertex2f(-0.52f,-0.39f);//
    glVertex2f(-0.52f,-0.39f);
    glVertex2f(-0.5f,-0.43f);//
    glEnd();

    glLineWidth(2.5);
    glBegin(GL_LINES);
    glColor3ub(230, 172, 0);
    glVertex2f(-0.545f,-0.385f);
    glVertex2f(-0.57f,-0.45f);//
    glVertex2f(-0.57f,-0.45f);
    glVertex2f(-0.575f,-0.5f);//
    glVertex2f(-0.575f,-0.5f);
    glVertex2f(-0.58f,-0.53f);//
    glVertex2f(-0.58f,-0.53f);
    glVertex2f(-0.57f,-0.55f);//
    glVertex2f(-0.57f,-0.55f);
    glVertex2f(-0.48f,-0.53f);//
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(38, 154, 214);
    glVertex2f(-0.585f,-0.43f);
    glVertex2f(-0.568f,-0.44f);
    glVertex2f(-0.528f,-0.44f);
    glVertex2f(-0.505f,-0.43f);
    glVertex2f(-0.528f,-0.425f);
    glVertex2f(-0.57f,-0.425f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(204, 51, 0);
    glVertex2f(-0.9f,-0.35f);
    glVertex2f(-0.9f,-0.55f);
    glVertex2f(-0.85f,-0.575f);
    glVertex2f(-0.8f,-0.59f);
    glVertex2f(-0.7f,-0.59f);
    glVertex2f(-0.65f,-0.575f);
    glVertex2f(-0.6f,-0.55f);
    glVertex2f(-0.6f,-0.35f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255, 102, 51);
    glVertex2f(-0.9f,-0.35f);
    glVertex2f(-0.85f,-0.375f);
    glVertex2f(-0.8f,-0.38f);
    glVertex2f(-0.7f,-0.38f);
    glVertex2f(-0.65f,-0.375f);
    glVertex2f(-0.6f,-0.35f);
    glVertex2f(-0.65f,-0.33f);
    glVertex2f(-0.7f,-0.325f);
    glVertex2f(-0.8f,-0.325f);
    glVertex2f(-0.85f,-0.33f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(194, 194, 163);
    glVertex2f(-0.59f,-0.43f);
    glVertex2f(-0.57f,-0.5f);
    glVertex2f(-0.52f,-0.5f);
    glVertex2f(-0.5f,-0.43f);
    glVertex2f(-0.52f,-0.42f);
    glVertex2f(-0.57f,-0.42f);
    glEnd();
}
void grass1()
{
     glLineWidth(4);
    glBegin(GL_LINES);
    glColor3ub(0, 102, 0);
	glVertex2f(-.05f, -0.35f);
	glVertex2f(-0.0f, -0.4f);//
	glVertex2f(0.05f, -0.35f);
	glVertex2f(0.0f, -0.4f);//
	glVertex2f(0.027f, -0.33f);
	glVertex2f(0.0f, -0.4f);//
	glVertex2f(-0.027f, -0.33f);
	glVertex2f(0.0f, -0.4f);//
	glVertex2f(0.0f, -0.3f);
	glVertex2f(0.0f, -0.4f);//
	glVertex2f(-0.075f, -0.37f);
	glVertex2f(-0.0f, -0.4f);//
	glVertex2f(0.0745f, -0.37f);
	glVertex2f(-0.0f, -0.4f);//
    glEnd();
    int i;
    int triangleAmount = 20;
GLfloat twicePi = 2.0f * PI;


	GLfloat e=-.05f; GLfloat f=-.35f; GLfloat radius11 =.02f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 51, 0);
		glVertex2f(e, f); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            e + (radius11 * cos(i *  twicePi / triangleAmount)),
			    f+ (radius11 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat g=0.05f; GLfloat h=-0.35f;
glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 102, 0);
		glVertex2f(g, h); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            g + (radius11 * cos(i *  twicePi / triangleAmount)),
			    h+ (radius11 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
GLfloat a1=0.0f; GLfloat b1=-0.3f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 255, 0);
		glVertex2f(a1, b1); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            a1 + (radius11 * cos(i *  twicePi / triangleAmount)),
			    b1 + (radius11 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
}
void grass2()
{
    glLineWidth(4);
    glBegin(GL_LINES);
    glColor3ub(0, 102, 0);
	glVertex2f(-.05f, -0.65f);
	glVertex2f(-0.0f, -0.7f);
	glVertex2f(0.05f, -0.65f);
	glVertex2f(0.0f, -0.7f);
	glVertex2f(0.027f, -0.62f);
	glVertex2f(0.0f, -0.7f);
	glVertex2f(-0.027f, -0.62f);
	glVertex2f(0.0f, -0.7f);
	glVertex2f(-0.0f, -0.6f);
	glVertex2f(0.0f, -0.7f);
	glVertex2f(-0.075f, -0.67f);
	glVertex2f(-0.0f, -0.7f);
	glVertex2f(0.075f, -0.67f);
	glVertex2f(-0.0f, -0.7f);
    glEnd();

    int i;
    int triangleAmount = 20;
GLfloat twicePi = 2.0f * PI;
	GLfloat e=-.05f; GLfloat f=-.65f; GLfloat radius11 =.02f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 255, 0);
		glVertex2f(e, f); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            e + (radius11 * cos(i *  twicePi / triangleAmount)),
			    f+ (radius11 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat g=0.05f; GLfloat h=-0.65f;
glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 51, 0);
		glVertex2f(g, h); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            g + (radius11 * cos(i *  twicePi / triangleAmount)),
			    h+ (radius11 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
GLfloat a1=0.0f; GLfloat b1=-0.6f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 102, 0);
		glVertex2f(a1, b1); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            a1 + (radius11 * cos(i *  twicePi / triangleAmount)),
			    b1 + (radius11 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
}
void grass3()
{
    glLineWidth(4);
    glBegin(GL_LINES);
    glColor3ub(0, 102, 0);
	glVertex2f(-.85f, -0.75f);
	glVertex2f(-0.8f, -0.8f);
	glVertex2f(-0.75f, -0.75f);
	glVertex2f(-0.8f, -0.8f);
	glVertex2f(-0.827f, -0.72f);
	glVertex2f(-0.8f, -0.8f);
	glVertex2f(-0.773f, -0.72f);
	glVertex2f(-0.8f, -0.8f);
	glVertex2f(-0.8f, -0.7f);
	glVertex2f(-0.8f, -0.8f);
	glVertex2f(-0.725f, -0.77f);
	glVertex2f(-0.8f, -0.8f);
	glVertex2f(-0.875f, -0.77f);
	glVertex2f(-0.8f, -0.8f);
    glEnd();

    int i;
    int triangleAmount = 20;
GLfloat twicePi = 2.0f * PI;
	GLfloat e=-.85f; GLfloat f=-.75f; GLfloat radius11 =.02f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 51, 0);
		glVertex2f(e, f); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            e + (radius11 * cos(i *  twicePi / triangleAmount)),
			    f+ (radius11 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat g=-0.75f; GLfloat h=-0.75f;
glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 255, 0);
		glVertex2f(g, h); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            g + (radius11 * cos(i *  twicePi / triangleAmount)),
			    h+ (radius11 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
GLfloat a1=-0.8f; GLfloat b1=-0.7f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 102, 0);
		glVertex2f(a1, b1); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            a1 + (radius11 * cos(i *  twicePi / triangleAmount)),
			    b1 + (radius11 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
}
void grass4()
{
    int i;
    int triangleAmount = 20;
GLfloat twicePi = 2.0f * PI;


	GLfloat e=-.05f; GLfloat f=-.35f; GLfloat radius11 =.02f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 51, 0);
		glVertex2f(e, f); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            e + (radius11 * cos(i *  twicePi / triangleAmount)),
			    f+ (radius11 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat g=0.05f; GLfloat h=-0.35f;
glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 102, 0);
		glVertex2f(g, h); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            g + (radius11 * cos(i *  twicePi / triangleAmount)),
			    h+ (radius11 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
GLfloat a1=0.0f; GLfloat b1=-0.3f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 255, 0);
		glVertex2f(a1, b1); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            a1 + (radius11 * cos(i *  twicePi / triangleAmount)),
			    b1 + (radius11 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glLineWidth(4);
    glBegin(GL_LINES);
    glColor3ub(0, 102, 0);
	glVertex2f(-.05f, -0.35f);
	glVertex2f(-0.0f, -0.4f);//
	glVertex2f(0.05f, -0.35f);
	glVertex2f(0.0f, -0.4f);//
	glVertex2f(0.027f, -0.33f);
	glVertex2f(0.0f, -0.4f);//
	glVertex2f(-0.027f, -0.33f);
	glVertex2f(0.0f, -0.4f);//
	glVertex2f(0.0f, -0.3f);
	glVertex2f(0.0f, -0.4f);//
	glVertex2f(-0.075f, -0.37f);
	glVertex2f(-0.0f, -0.4f);//
	glVertex2f(0.0745f, -0.37f);
	glVertex2f(-0.0f, -0.4f);//
    glEnd();
}
void grass5()
{

    int i;
    int triangleAmount = 20;
GLfloat twicePi = 2.0f * PI;
	GLfloat e=-.05f; GLfloat f=-.65f; GLfloat radius11 =.02f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 255, 0);
		glVertex2f(e, f); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            e + (radius11 * cos(i *  twicePi / triangleAmount)),
			    f+ (radius11 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat g=0.05f; GLfloat h=-0.65f;
glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 51, 0);
		glVertex2f(g, h); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            g + (radius11 * cos(i *  twicePi / triangleAmount)),
			    h+ (radius11 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
GLfloat a1=0.0f; GLfloat b1=-0.6f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 102, 0);
		glVertex2f(a1, b1); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            a1 + (radius11 * cos(i *  twicePi / triangleAmount)),
			    b1 + (radius11 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	 glLineWidth(4);
    glBegin(GL_LINES);
    glColor3ub(0, 102, 0);
	glVertex2f(-.05f, -0.65f);
	glVertex2f(-0.0f, -0.7f);
	glVertex2f(0.05f, -0.65f);
	glVertex2f(0.0f, -0.7f);
	glVertex2f(0.027f, -0.62f);
	glVertex2f(0.0f, -0.7f);
	glVertex2f(-0.027f, -0.62f);
	glVertex2f(0.0f, -0.7f);
	glVertex2f(-0.0f, -0.6f);
	glVertex2f(0.0f, -0.7f);
	glVertex2f(-0.075f, -0.67f);
	glVertex2f(-0.0f, -0.7f);
	glVertex2f(0.075f, -0.67f);
	glVertex2f(-0.0f, -0.7f);
    glEnd();
}
void grass6()
{

    int i;
    int triangleAmount = 20;
GLfloat twicePi = 2.0f * PI;
	GLfloat e=-.85f; GLfloat f=-.75f; GLfloat radius11 =.02f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 51, 0);
		glVertex2f(e, f); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            e + (radius11 * cos(i *  twicePi / triangleAmount)),
			    f+ (radius11 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat g=-0.75f; GLfloat h=-0.75f;
glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 255, 0);
		glVertex2f(g, h); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            g + (radius11 * cos(i *  twicePi / triangleAmount)),
			    h+ (radius11 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
GLfloat a1=-0.8f; GLfloat b1=-0.7f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 102, 0);
		glVertex2f(a1, b1); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            a1 + (radius11 * cos(i *  twicePi / triangleAmount)),
			    b1 + (radius11 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glLineWidth(4);
    glBegin(GL_LINES);
    glColor3ub(0, 102, 0);
	glVertex2f(-.85f, -0.75f);
	glVertex2f(-0.8f, -0.8f);
	glVertex2f(-0.75f, -0.75f);
	glVertex2f(-0.8f, -0.8f);
	glVertex2f(-0.827f, -0.72f);
	glVertex2f(-0.8f, -0.8f);
	glVertex2f(-0.773f, -0.72f);
	glVertex2f(-0.8f, -0.8f);
	glVertex2f(-0.8f, -0.7f);
	glVertex2f(-0.8f, -0.8f);
	glVertex2f(-0.725f, -0.77f);
	glVertex2f(-0.8f, -0.8f);
	glVertex2f(-0.875f, -0.77f);
	glVertex2f(-0.8f, -0.8f);
    glEnd();
}
void river()
{
   glBegin(GL_QUADS);
   glColor3ub(1000, 1000, 1000);

   glVertex2f(-1.0f,0.45f);
   glColor3ub(38, 154, 214);

   glVertex2f(1.0f,0.45f);
   glColor3ub(10, 30, 100);

   glVertex2f(1.0f,-1.0f);
   glVertex2f(-1.0f,-1.0f);
   glEnd();
}
GLfloat position1 = 0.4f;
GLfloat speed1 =-0.005f;///negative for boat left moving
void boat(int value)
{
   if(position1 <- 0.4)
        position1 = 0.4f;

    position1 += speed1;

	glutPostRedisplay();
	glutTimerFunc(100, boat, 0);
}
void boat()
{
    ///boat base
    glBegin(GL_POLYGON);
	glColor3ub(0,0,0);
	glVertex2f(-0.2f, 0.4f);
	glVertex2f(-0.15f, 0.35f);
	glVertex2f(0.15f, 0.35f);
    glVertex2f(0.2f, 0.4f);
    glEnd();

	///boat body
	glBegin(GL_POLYGON);
	glColor3ub(255, 153, 20);
	glVertex2f(-0.13f, 0.4f);
	glVertex2f(-0.11f,0.48f);
	glVertex2f(-0.088f, 0.52f);
	glVertex2f(0.13f, 0.52f);
	glVertex2f(0.14f, 0.49f);
    glVertex2f(0.15f, 0.4f);
    glEnd();

    glPointSize(10.0);
	glBegin(GL_POINTS);       /// Each set of 4 axis form a quad
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.08f, 0.49f);    // x, y
	glVertex2f(-0.06f, 0.49f);    // x, y
	glVertex2f(-0.04f, 0.49f);    // x, y
	glVertex2f(-0.02f, 0.49f);    // x, y
	glVertex2f(-0.0f, 0.49f);    // x, y
    glVertex2f(0.02f, 0.49f);    // x, y
    glVertex2f(0.04f, 0.49f);    // x, y
    glVertex2f(0.06f, 0.49f);    // x, y
    glVertex2f(0.08f, 0.49f);    // x, y
    glVertex2f(0.1f, 0.49f);    // x, y
    glVertex2f(0.12f, 0.49f);    // x, y
	glEnd();

	///boat pal
	glBegin(GL_POLYGON);
	glColor3ub(255,25,25);
	glVertex2f(-0.038f, 0.57f);
	glVertex2f(-0.038f, 0.73f);
	glVertex2f(-0.035f, 0.75f);
	glVertex2f(0.064f, 0.73f);
	glVertex2f(0.065f, 0.71f);
    glVertex2f(0.065f, 0.55f);
    glEnd();

    ///pal stick
    glBegin(GL_POLYGON);
	glColor3ub(136,204,0);
	glVertex2f(0.0f, 0.52f);
	glVertex2f(0.0f, 0.79f);
	glVertex2f(0.01f, 0.79f);
	glVertex2f(0.01f, 0.52f);
	glEnd();
}
void boat2()
{
    /// boat base
    glBegin(GL_POLYGON);
	glColor3ub(0, 0, 0);
	glVertex2f(0.63f, -0.53f);
	glVertex2f(0.53f, -0.53f);
	glVertex2f(0.43f, -0.5f);
	glVertex2f(0.53f, -0.6f);
	glVertex2f(0.78f, -0.6f);
	glVertex2f(0.88f, -0.5f);
	glVertex2f(0.78f, -0.53f);
	glVertex2f(0.73f, -0.53f);
	glEnd();

    ///boat body
	glBegin(GL_POLYGON);
	glColor3ub(122, 122, 82);
	glVertex2f(0.43f, -0.5f);
	glVertex2f(0.53f, -0.53f);
	glVertex2f(0.63f, -0.53f);
	glVertex2f(0.73f, -0.53f);
	glVertex2f(0.78f, -0.53f);
	glVertex2f(0.88f, -0.5f);
	glVertex2f(0.78f, -0.48f);
	glVertex2f(0.73f, -0.48f);
	glVertex2f(0.63f, -0.48f);
	glVertex2f(0.53f, -0.48f);
	glVertex2f(0.43f, -0.5f);
	glEnd();

	///boat upper wall
	glLineWidth(3);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
	glVertex2f(0.88f, -0.5f);
	glVertex2f(0.78f, -0.48f);
	glVertex2f(0.78f, -0.48f);
	glVertex2f(0.73f, -0.48f);
	glVertex2f(0.73f, -0.48f);
	glVertex2f(0.63f, -0.48f);
	glVertex2f(0.63f, -0.48f);
	glVertex2f(0.53f, -0.48f);
	glVertex2f(0.53f, -0.48f);
	glVertex2f(0.43f, -0.5f);
    glEnd();

    ///body divider wall
    glLineWidth(9);
    glBegin(GL_LINES);
    glColor3ub(0,0, 0);
	glVertex2f(0.53f, -0.48f);
	glVertex2f(0.53f, -0.535f);
	glVertex2f(0.63f, -0.48f);
	glVertex2f(0.63f, -0.535f);
	glVertex2f(0.73f, -0.48f);
	glVertex2f(0.73f, -0.535f);
	glVertex2f(0.81f, -0.48f);
	glVertex2f(0.81f, -0.535f);
    glEnd();

    ///boat seeking stick
    glLineWidth(6);
    glBegin(GL_LINES);
    glColor3ub(204, 153, 0);
	glVertex2f(0.38f, -0.38f);
	glVertex2f(0.4f, -0.53f);
    glEnd();

    ///boat seeking dori
    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3ub(153, 153, 102);
	glVertex2f(0.38f, -0.42f);
	glVertex2f(0.43f, -0.5f);
    glEnd();
}

///night little boat
void boat3()
{
    ///boat upper wall
    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
	glVertex2f(0.88f, -0.5f);
	glVertex2f(0.78f, -0.48f);
	glVertex2f(0.78f, -0.48f);
	glVertex2f(0.73f, -0.48f);
	glVertex2f(0.73f, -0.48f);
	glVertex2f(0.63f, -0.48f);
	glVertex2f(0.63f, -0.48f);
	glVertex2f(0.53f, -0.48f);
	glVertex2f(0.53f, -0.48f);
	glVertex2f(0.43f, -0.5f);
    glEnd();

    ///boat body wall
    glLineWidth(9);
    glBegin(GL_LINES);
    glColor3ub(0,0, 0);
	glVertex2f(0.53f, -0.48f);
	glVertex2f(0.53f, -0.535f);
	glVertex2f(0.63f, -0.48f);
	glVertex2f(0.63f, -0.535f);
	glVertex2f(0.73f, -0.48f);
	glVertex2f(0.73f, -0.535f);
	glVertex2f(0.81f, -0.48f);
	glVertex2f(0.81f, -0.535f);
    glEnd();

    ///boat seeking stick
    glLineWidth(6);
    glBegin(GL_LINES);
    glColor3ub(204, 153, 0);
	glVertex2f(0.38f, -0.38f);
	glVertex2f(0.4f, -0.53f);
    glEnd();

    ///boat seeking dori
    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3ub(153, 153, 102);
	glVertex2f(0.38f, -0.42f);
	glVertex2f(0.43f, -0.5f);
    glEnd();

    ///boat base
    glBegin(GL_POLYGON);
	glColor3ub(0, 0, 0);
	glVertex2f(0.63f, -0.53f);
	glVertex2f(0.53f, -0.53f);
	glVertex2f(0.43f, -0.5f);
	glVertex2f(0.53f, -0.6f);
	glVertex2f(0.78f, -0.6f);
	glVertex2f(0.88f, -0.5f);
	glVertex2f(0.78f, -0.53f);
	glVertex2f(0.73f, -0.53f);
	glEnd();

	///boat body
	glBegin(GL_POLYGON);
	glColor3ub(122, 122, 82);
	glVertex2f(0.43f, -0.5f);
	glVertex2f(0.53f, -0.53f);
	glVertex2f(0.63f, -0.53f);
	glVertex2f(0.73f, -0.53f);
	glVertex2f(0.78f, -0.53f);
	glVertex2f(0.88f, -0.5f);
	glVertex2f(0.78f, -0.48f);
	glVertex2f(0.73f, -0.48f);
	glVertex2f(0.63f, -0.48f);
	glVertex2f(0.53f, -0.48f);
	glVertex2f(0.43f, -0.5f);
	glEnd();
}

///night big boat
void boat4()
{
    ///boat base
    glBegin(GL_POLYGON);
	glColor3ub(0,0,0);
	glVertex2f(0.3f, -0.25f);
	glVertex2f(0.35f, -0.3f);
	glVertex2f(0.65f, -0.3f);
    glVertex2f(0.7f, -0.25f);
    glEnd();

	///boat body
	glBegin(GL_POLYGON);
	glColor3ub(255, 153, 0);
	glVertex2f(0.37f, -0.25f);
	glVertex2f(0.39f,-0.17f);
	glVertex2f(0.412f, -0.13f);
	glVertex2f(0.63f, -0.13f);
	glVertex2f(0.64f, -0.16f);
    glVertex2f(0.65f, -0.25f);
    glEnd();

	///boat pal
	glBegin(GL_POLYGON);
	glColor3ub(255,25,25);
	glVertex2f(0.462f, -0.08f);
	glVertex2f(0.462f, 0.08f);
	glVertex2f(0.465f, 0.1f);
	glVertex2f(0.564f, 0.08f);
	glVertex2f(0.565f, 0.06f);
    glVertex2f(0.565f, -0.1f);
    glEnd();

    ///boat pl stick
    glBegin(GL_POLYGON);
	glColor3ub(136,204,0);
	glVertex2f(0.5f, -0.13f);
	glVertex2f(0.5f, 0.14f);
	glVertex2f(0.51f, 0.14f);
	glVertex2f(0.51f, -0.13f);
	glEnd();
}
GLfloat position = 0.6f;
GLfloat speed =-0.005f;///negative for fish left moving
void fish(int value)
{
   if(position < -0.6)
        position = 0.6f;

    position += speed;

	glutPostRedisplay();
	glutTimerFunc(100, fish, 0);
}

void fish()
{
    glBegin(GL_TRIANGLES);

    glColor3ub(255,25,25);
    glVertex2f(-0.1f, -0.5f);    /// back1
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.17f,-0.53f);
    glColor3ub(255,25,25);
    glVertex2f(-0.16f, -0.47f);

	glColor3ub(255,25,25);
    glVertex2f(-0.13f, -0.9f);    /// back2
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.2f,-0.93f);
    glColor3ub(255,25,25);
    glVertex2f(-0.21f, -0.87f);

    glColor3ub(255,25,25);
    glVertex2f(-0.14f, -0.5f);    /// lej1
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.1f,-0.53f);
    glColor3ub(255,25,25);
    glVertex2f(-0.09f, -0.47f);

    glColor3ub(255,25,25);
    glVertex2f(-0.16f, -0.9f);    /// lej2
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.1f,-0.93f);
    glColor3ub(255,25,25);
    glVertex2f(-0.09f, -0.87f);

    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.199f, -0.5f);    /// front1
    glVertex2f(-0.17f,-0.53f);
    glVertex2f(-0.16f, -0.47f);

    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.25f, -0.9f);    /// front2
    glVertex2f(-0.2f, -0.93f);
    glVertex2f(-0.21f, -0.87f);
	glEnd();

	glPointSize(5.0);
	// Draw a Red 1x1 Square centered at origin
	glBegin(GL_POINTS);              /// Each set of 4 axis form a quad
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.18f, -0.5f);    /// fish1
	glVertex2f(-0.23f, -0.9f);    /// fish2
	glEnd();

    glFlush();  // Render now
}

GLfloat positionx = -0.8f;
GLfloat speedx =-0.005f;///negative for fish left moving
void fish1(int value)
{
   if(positionx < -0.8)
        positionx = 0.8f;

    positionx += speedx;

	glutPostRedisplay();
    glutTimerFunc(100, fish1, 0);
}

///function for fish1
void fish1()
{
     glBegin(GL_TRIANGLES);

	 glColor3ub(255,25,25);
     glVertex2f(-0.65f, -1.2f);    /// back3
     glColor3f(1.0f, 1.0f, 1.0f);
	 glVertex2f(-0.68f,-1.22f);
     glColor3ub(255,25,25);
	 glVertex2f(-0.68f, -1.18f);

	 glColor3ub(255,25,25);
     glVertex2f(-0.71f, -1.2f);    /// front3
     glColor3f(1.0f, 1.0f, 1.0f);
     glVertex2f(-0.68f,-1.22f);
     glColor3ub(255,25,25);
	 glVertex2f(-0.68f, -1.18f);

	 glColor3f(1.0f, 1.0f, 1.0f);
     glVertex2f(-0.66f, -1.2f);    /// lej3
     glColor3ub(255,25,25);
	 glVertex2f(-0.63f,-1.22f);
	 glVertex2f(-0.63f, -1.18f);

	 glEnd();

	 glPointSize(3.0);
	 // Draw a Red 1x1 Square centered at origin
	 glBegin(GL_POINTS);              /// Each set of 4 axis form a quad
	 glColor3f(0.0f, 0.0f, 0.0f);
	 glVertex2f(-0.7f, -1.2f);    /// fish3
	 glEnd();

     glFlush();
}
void StartingText()
{
    char text[120];
    sprintf(text, "BEAUTIFUL VILLAGE SCENARIO",5.00,8.00);
    glColor3f(0, 0, 0);
    glRasterPos2f( -33 , 28 );
    for(int i = 0; text[i] != '\0'; i++)
    {
        if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
            glRasterPos2f( -32 , 02 );
        }
        else glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
    }
    sprintf(text,"  PRESS 'D' FOR DAY VIEW,PRESS 'N' FOR NIGHT VIEW,PRESS 'R' FOR RAIN VIEW",5.00,8.00);
    glColor3f(0, 0, 0);
    glRasterPos2f( -100 , 0 );
    for(int i = 0; text[i] != '\0'; i++)
    {
          if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, text[i]);
            glRasterPos2f( -67.5 , 18 );
        }
        else glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, text[i]);
    }
    sprintf(text,"  SUBMITTED TO-",5.00,8.00);
    glColor3f(0, 0, 0);
    glRasterPos2f( -100 , 0 );
    for(int i = 0; text[i] != '\0'; i++)
    {
          if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, text[i]);
            glRasterPos2f( 18 , 10 );
        }
        else glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, text[i]);
    }

    sprintf(text,"  MD. SIYAMUL ISLAM",5.00,8.00);
    glColor3f(0, 0, 0);
    glRasterPos2f( -100 , 0 );
    for(int i = 0; text[i] != '\0'; i++)
    {
          if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, text[i]);
            glRasterPos2f( 15 , 5 );
        }
        else glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, text[i]);
    }

    sprintf(text,"  SUBMITTED BY-",5.00,8.00);
    glColor3f(0, 0, 0);
    glRasterPos2f( -100 , 0 );
    for(int i = 0; text[i] != '\0'; i++)
    {
          if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, text[i]);
            glRasterPos2f( 18 , 0 );
        }
        else glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, text[i]);
    }

    sprintf(text,"  TASNIM HAIDER; ID: 18-36162-1",5.00,8.00);
    glColor3f(0, 0, 0);
    glRasterPos2f( -100 , 0 );
    for(int i = 0; text[i] != '\0'; i++)
    {
          if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, text[i]);
            glRasterPos2f( 5 , -5 );
        }
        else glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, text[i]);
    }
    sprintf(text,"  MD. MUSTAFIZUR RAHMAN; ID: 18-36179-1",5.00,8.00);
    glColor3f(0, 0, 0);
    glRasterPos2f( -100 , 0 );
    for(int i = 0; text[i] != '\0'; i++)
    {
          if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, text[i]);
            glRasterPos2f( 5 , -10 );
        }
        else glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, text[i]);
    }
    sprintf(text,"  SHUSMITA ISLAM; ID: 18-36182-1",5.00,8.00);
    glColor3f(0, 0, 0);
    glRasterPos2f( -100 , 0 );
    for(int i = 0; text[i] != '\0'; i++)
    {
          if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, text[i]);
            glRasterPos2f( 5 , -15 );
        }
        else glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, text[i]);
    }
    sprintf(text,"  RAHAT MAKSUD PRANTO; ID: 18-37675-1",5.00,8.00);
    glColor3f(0, 0, 0);
    glRasterPos2f( -100 , 0 );
    for(int i = 0; text[i] != '\0'; i++)
    {
          if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, text[i]);
            glRasterPos2f( 5 , -20 );
        }
        else glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, text[i]);
    }
    sprintf(text,"  FATEMATUZ JOHORA; ID: 18-38241-2",5.00,8.00);
    glColor3f(0, 0, 0);
    glRasterPos2f( -100 , 0 );
    for(int i = 0; text[i] != '\0'; i++)
    {
          if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, text[i]);
            glRasterPos2f( 5 , -25 );
        }
        else glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, text[i]);
    }
}
void Display(void)
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();
    glTranslatef(0,0,-20);
    StartingText();
    glFlush();
    glutSwapBuffers();
}
void DrawSphere()
{
    glColorMaterial ( GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE ) ;
    glEnable ( GL_COLOR_MATERIAL ) ;
    glColor4f(1.0f, 0.0f, 0.0f, 0.0f);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glEnable(GL_DEPTH_TEST);
    glLoadIdentity();
    glPushMatrix();
    glTranslatef(position2,0.0f, 0.0f);
    cloud3();
    cloud2();
    glPopMatrix();
    moon();
    boat4();
    boat3();
    hut1();
    tree();
    backgroundtree();
    fence();
    grass4();
    grass5();
    grass6();
    way();
    well1();
    Straw();
    ground();
    river();
    glPushMatrix();
    glTranslatef(0.0f,position4, 0.0f);
    sun();
    glPopMatrix();
    stars();
    sky2();
    glFlush();
}

void display2() //Night
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glEnable(GL_DEPTH_TEST);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    PointLight(0,0,1, 0, 1, 1);
    DrawSphere();
    glLoadIdentity();
    glutSwapBuffers();
}

struct Point
{
    float x, y;
    unsigned char r, g, b, a;
};
std::vector< Point > points;

void display1(void) //Rain
{
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
	glLineWidth(2);
    sky();
    cloud1();
    cloud2();
    cloud3();
    cloud4();
    backgroundtree();
    river();
    ground();
    grass1();
    grass2();
    grass3();
    way();
    boat2();
    fence();
    tree();
    well();
    Straw();
    hut();
    glOrtho(-50, 50, -50, 50, -1, 1);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();

    glPushMatrix();
    glTranslatef(0.0f,position3, 0.0f);
    glColor3ub( 255, 255, 255 );
    glEnableClientState( GL_VERTEX_ARRAY );
    glEnableClientState( GL_COLOR_ARRAY );
    glVertexPointer( 2, GL_FLOAT, sizeof(Point), &points[0].x );
    glColorPointer( 4, GL_UNSIGNED_BYTE, sizeof(Point), &points[0].r );
    glPointSize( 2.5 );
    glDrawArrays( GL_POINTS, 0, points.size() );
    glDisableClientState( GL_VERTEX_ARRAY );
    glDisableClientState( GL_COLOR_ARRAY );
    glPopMatrix();
    glFlush();
    glutSwapBuffers();
}

void display() //Day
{
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glLineWidth(2);
    sky();
    sun();
    glPushMatrix();
    glTranslatef(position2,0.0f, 0.0f);
    cloud1();
    cloud2();
    cloud3();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(position22,0.0f, 0.0f);
    bird();
    glPopMatrix();
    backgroundtree();
    river();
    glPushMatrix();
    glTranslatef(position1,0.0f, 0.0f);
    boat();

    glTranslatef(position,0.7f, 0.0f);///for day fish move
    fish();
    glTranslatef(positionx,0.5f, 0.0f);///for day fish1 move
    fish1();

    glPopMatrix();
    ground();
    grass1();
    grass2();
    grass3();
    way();
    boat2();
    fence();
    tree();
    well();
    Straw();
    hut();
	glFlush();
	glutSwapBuffers();
}
void reshape(int w, int h)
{
    float aspectRatio = (float)w/(float)h;
        glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
        gluPerspective(145, aspectRatio, 1.0, 100.0);
    glMatrixMode(GL_MODELVIEW);
}

void init(void)
{
    glClearColor( 1.0f, 1.0f, 1.0f, 1.0f);
    glClearDepth( 1.0 );
    glEnable(GL_DEPTH_TEST);
    glEnable(GL_LIGHTING);
    glShadeModel(GL_SMOOTH);
    glEnable(GL_COLOR_MATERIAL);
    glColorMaterial(GL_FRONT, GL_AMBIENT_AND_DIFFUSE);
    glEnable(GL_LIGHT0);
}
void handleKeypress(unsigned char key, int x, int y)
{
	switch (key)
	{
	    case  'd':
	        glutDestroyWindow(1);
	        glutInitWindowSize(1000, 600);
            glutInitWindowPosition(200, 100);
            glutCreateWindow("BEAUTY OF NATURE, BEAUTIFUL VILLAGE SCENARIO");
            glutKeyboardFunc(handleKeypress);
            glutDisplayFunc(display);
            sndPlaySound("bird-2.wav",SND_ASYNC|SND_LOOP);
            break;
            break;
        case 'r':
            glutDestroyWindow(1);
	        glutInitWindowSize(1000, 600);
            glutInitWindowPosition(200, 100);
            glutCreateWindow("BEAUTY OF NATURE, BEAUTIFUL VILLAGE SCENARIO");
            glutKeyboardFunc(handleKeypress);
            glutDisplayFunc(display1);
            sndPlaySound("rain-07.wav",SND_ASYNC|SND_LOOP);
            break;
         case 'n':
            glutDestroyWindow(1);
	        glutInitWindowSize(1000, 600);
            glutInitWindowPosition(200, 100);
            glutCreateWindow("BEAUTY OF NATURE, BEAUTIFUL VILLAGE SCENARIO");
            glutKeyboardFunc(handleKeypress);
            glutDisplayFunc(display2);
            sndPlaySound("cricket-2.wav",SND_ASYNC|SND_LOOP);
            glutPostRedisplay();
            break;
        case  'D':
	        glutDestroyWindow(1);
	        glutInitWindowSize(1000, 600);
            glutInitWindowPosition(200, 100);
            glutCreateWindow("BEAUTY OF NATURE, BEAUTIFUL VILLAGE SCENARIO");
            glutKeyboardFunc(handleKeypress);
            glutDisplayFunc(display);
            sndPlaySound("bird-2.wav",SND_ASYNC|SND_LOOP);
            break;
            break;
        case 'R':
            glutDestroyWindow(1);
	        glutInitWindowSize(1000, 600);
            glutInitWindowPosition(200, 100);
            glutCreateWindow("BEAUTY OF NATURE, BEAUTIFUL VILLAGE SCENARIO");
            glutKeyboardFunc(handleKeypress);
            glutDisplayFunc(display1);
            sndPlaySound("rain-07.wav",SND_ASYNC|SND_LOOP);

            break;
         case 'N':
            glutDestroyWindow(1);
	        glutInitWindowSize(1000, 600);
            glutInitWindowPosition(200, 100);
            glutCreateWindow("BEAUTY OF NATURE, BEAUTIFUL VILLAGE SCENARIO");
            glutKeyboardFunc(handleKeypress);
            glutDisplayFunc(display2);
            sndPlaySound("cricket-2.wav",SND_ASYNC|SND_LOOP);
            glutPostRedisplay();
    }
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitWindowSize(1000, 600);
    glutInitWindowPosition(200, 100);
    glutCreateWindow("BEAUTY OF NATURE, BEAUTIFUL VILLAGE SCENARIO");
    init();
    glutReshapeFunc(reshape);
    //glutDisplayFunc(display2);
    glutDisplayFunc(Display);
     for( size_t i = 0; i < 1000; ++i )
    {
        Point pt;
        pt.x = -50 + (rand() % 100);
        pt.y = -50 + (rand() % 100);
        pt.r = 255;
        pt.g = 255;
        pt.b = 255;
        pt.a = 255;
        points.push_back(pt);
    }
    glutTimerFunc(100, cloud, 0);
    glutTimerFunc(100, sunn, 0);
    glutTimerFunc(100, boat, 0);
    glutTimerFunc(100, rain, 0);
    glutTimerFunc(100, birdd, 0);
    glutTimerFunc(100, fish1, 0);
    glutKeyboardFunc(handleKeypress);
    init();
    glutMainLoop();
    return 0;
}
