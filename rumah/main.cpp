#include <GL/glu.h>
#include <GL/gl.h>
#include <GL/glut.h>
#include <math.h>


float v=0.0f, e=-1.0f;
float a=0.0f, b=5.0f;
float xpos = 0, ypos = 0, zpos = 0, xrot = 0, yrot = 0, angle=0.0;
float inner, outer; int garisv,garish; 


void kubus (int i, int r)
{
     if (r == 0)
		r = 1;
	float bus =  i * 1.0 / r;
     
     glMatrixMode (GL_PROJECTION); 
     glLoadIdentity();
     glViewport (0,0, i, r);
     gluPerspective(50.0f, bus, 0.3f, 100.0f);
     glMatrixMode(GL_MODELVIEW);
     glOrtho(0.0,2.0,0.0,2.0,-2.0,2.0);
}

void koorx(void)
{
     glBegin(GL_LINE_STRIP);
     glVertex2f(-3,0);
     glVertex2f(6,0);
     glEnd();
}
void koory(void)
{
     glBegin(GL_LINE_STRIP);
     glVertex2f(0,3);
     glVertex2f(0,-3);
     glEnd();
}
void koorz(void)
{
     glBegin(GL_LINE_STRIP);
     glVertex2f(0,0);
     glVertex2f(6.4,3);
     glEnd();
}
void kubus (void)
{
     glutWireCube(0.5);
}
void kubussolid (void)
{
     glutSolidCube(0.5);
}

void camera (void) {
    glRotatef(xrot,1.0,0.0,0.0);
    glRotatef(yrot,0.0,1.0,0.0);
    glTranslated(-xpos,-ypos,-zpos);
}

void display (void)
{
     const double waktu = glutGet (GLUT_ELAPSED_TIME) / 1000.0;
     const double lama1 = 50*waktu, lama2 = waktu/2, lama3 = waktu/10;
     GLdouble eqn[4] = {0.0, 1.0, 0.0, 0.0};
     GLdouble eqn2[4] = {1.0, 0.0, 0.0, 0.0};
          
     glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
     glClearColor(0.2,0.2,0.2,0.2);
     
     glLoadIdentity();
     gluLookAt(a, 0.0, b, a+v, 0.0, b+e, 0.0, 1.0, 0.0);
     camera();
     glEnable(GL_TEXTURE_2D);
     glEnable(GL_COLOR_MATERIAL);
     glPushMatrix();
     glClipPlane(GL_CLIP_PLANE0,eqn);
     glEnable(GL_CLIP_PLANE0);
     glClipPlane(GL_CLIP_PLANE1,eqn2);
     glEnable(GL_CLIP_PLANE1);
     glPopMatrix();
     glDisable(GL_CLIP_PLANE0);
     glDisable(GL_CLIP_PLANE1);
     
     koorx();
     koory();
     koorz();
     glPushMatrix();
     glColor3f(0.0,0.0,0.0);
     glTranslatef(0.0,-1.2,0);
     glScalef(8.0,0.1,8.0);
     kubussolid();
     glPopMatrix();
     glPushMatrix();
     glColor3f(0.6,0.6,0.6);
     glTranslatef(-0.5,-0.9,-0.9);
     glScalef(3.5,0.45,1.7);
     kubussolid();
     glPopMatrix();
     glPushMatrix();
     glColor3f(0.3,0.3,0.3);
     glTranslatef(-1.41,-0.94,-0.9);
     glScalef(0.2,1.1,1.7);
     kubussolid();
     glPopMatrix();
     glPushMatrix();
     glColor3f(0.3,0.3,0.3);
     glTranslatef(0.3,-1.12,-0.9);
     glScalef(0.2,0.5,1.7);
     kubussolid();
     glPopMatrix();
     glPushMatrix();
     glColor3f(0.9,0.9,0.3);
     glTranslatef(-1.0,-0.6,1.0);
     glScalef(1.2,2.4,0.1);
     kubussolid();
     glPopMatrix();
     glPushMatrix();
     glColor3f(0.8,0.7,0.3);
     glTranslatef(-1.0,-0.6,1.4);
     glScalef(1.2,2.4,0.1);
     kubussolid();
     glPopMatrix();
     glPushMatrix();
     glColor3f(0.8,0.7,0.3);
     glTranslatef(-1.0,-0.6,0.6);
     glScalef(1.2,2.4,0.1);
     kubussolid();
     glPopMatrix();
     glPushMatrix();
     glColor3f(0.8,0.7,0.3);
     glTranslatef(-1.3,-0.6,1.0);
     glScalef(0.1,2.4,1.7);
     kubussolid();
     glPopMatrix();
     glPushMatrix();
     glColor3f(0.8,0.7,0.3);
     glTranslatef(-1.02,0.0,1.0);
     glScalef(1.2,0.1,1.7);
     kubussolid();
     glPopMatrix();
     glPushMatrix();
     glColor3f(0.9,0.2,0.6);
     glTranslatef(-1.98,-0.2,0.0);
     glScalef(0.05,4.0,8.0);
     kubussolid();
     glPopMatrix();
     glPushMatrix();
     glColor3f(0.7,0.3,0.6);
     glTranslatef(-0.0,-0.2,-2.0);
     glScalef(8.0,4.0,0.05);
     kubussolid();
     glPopMatrix();
     glPushMatrix();
     glColor3f(0.4,0.4,0.6);
     glTranslatef(1.5,-1.07,0.9);
     glScalef(0.8,0.5,2.0);
     kubussolid();
     glPopMatrix();
     glPushMatrix();
     glColor3f(0.7,0.2,0.1);
     glTranslatef(1.5,-0.998,1.28);
     glScalef(0.9,0.7,0.5);
     kubussolid();
     glPopMatrix();
     glPushMatrix();
     glColor3f(0.7,0.0,0.7);
     glTranslatef(1.5,-0.85,0.82);
     glScalef(0.45,0.8,0.85);
     kubussolid();
     glPopMatrix();
     glPushMatrix();
     glColor3f(0.6,1.0,0.7);
     glTranslatef(1.48,-0.78,0.82);
     glScalef(0.4,0.5,0.5);
     kubussolid();
     glPopMatrix();
     glPushMatrix();
     glColor3f(0.7,0.2,0.1);
     glTranslatef(1.5,-0.998,0.4);
     glScalef(0.9,0.7,0.5);
     kubussolid();
     glPopMatrix();
     glPushMatrix();
     glColor3f(0.6,0.1,0.3);
     glTranslatef(-1.0,-0.6,1.0);
     glScalef(1.2,2.4,1.6);
     kubussolid();
     glPopMatrix();
     glPushMatrix();
     glEnable(GL_LIGHTING);
     glEnable(GL_LIGHT0);
     glDisable(GL_LIGHTING);
     glDisable(GL_LIGHT0);
     glPopMatrix();
     glFlush();
     glutSwapBuffers();
     angle++;
     

}

//FUNGSI KEYBOARD
void keyboard (unsigned char key, int x, int y)
{
     float detik = 1000.0;
     const double time = glutGet(GLUT_ELAPSED_TIME) / detik;
     
     switch (key){
            case '1':
                 xrot += 1;
              if (xrot >360) 
              xrot -= 360;
            break;
            case '2':
                  xrot -= 1;
              if (xrot < -360) 
              xrot += 360;
            break;
            case '3':
                 yrot += 1;
              if (yrot >360) 
              yrot -= 360;
            break;
           case '4':
                 yrot -= 1;
              if (yrot < -360)
              yrot += 360;
            break;
            case 27:
                  glutLeaveGameMode();
                 exit (0);
                }
     
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    glutGameModeString( "1024×768:32@75" ); 
    glutEnterGameMode(); 
    glutDisplayFunc(display);
    glutReshapeFunc(kubus);
    glutIdleFunc(display);
    glutKeyboardFunc(keyboard);
    glEnable(GL_DEPTH_TEST);
    glutMainLoop();
    return 0;
}
