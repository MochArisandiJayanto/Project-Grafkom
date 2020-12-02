#include <GL/gl.h> //Import library yang akan digunakan
#include <GL/glu.h>
#include <GL/glut.h> // library grafik dari opengl
#include "pesawat.h"
#include "awan.h"

Pesawat pesawat;
Awan awan;

float x;
float y;

void timer(int data)
{
    awan.moveAwan();

    // Jika menekan tombol panah kiri
    if(GetAsyncKeyState(VK_LEFT)){
        if (x>=-17){
            x -= 0.1f;
        }
    }
    // Jika menekan tombol panah kanan
    else if(GetAsyncKeyState(VK_RIGHT)){
        if (x<=71) {
            x+=0.1f;
        }
    }

    // Jika menekan tombol panah atas
    if(GetAsyncKeyState(VK_UP)){
        if (y<=82) {
            y+=0.1f;
            }
        }
    // Jika menekan tombol panah bawah
    else if (GetAsyncKeyState(VK_DOWN)){
        if (y>=0){
            y-=0.1f;
        }
    }

    glutPostRedisplay();
	glutTimerFunc(1,timer,0);
}


void displayMe(void) {
    glClearColor(0,1,1,1);
    glClear(GL_COLOR_BUFFER_BIT);

    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3ub(100, 149, 237);
    glVertex2f(100,0);
    glVertex2f(0,0);
    glVertex2f(0,100);
    glVertex2f(100,100);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    awan.manggilAwan();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(x, y, 0);
    pesawat.drawPesawat();
    glPopMatrix();

    glFlush();
    glutSwapBuffers();
}

void myinit() {
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glMatrixMode(GL_MODELVIEW);
	glClearColor(1.0, 1.0, 1.0, 1.0); //membersihkan windows
	glColor3f(0.0, 0.0, 0.0); //spesifikasi warna
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
}

int main(int argc, char** argv){ // atur display
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);
	glutInitWindowSize(900, 600); // ukuran display
	glutInitWindowPosition(50, 0); // posisi program
	glutCreateWindow("Jaya"); // nama window
	glutDisplayFunc(displayMe); //
	myinit();
	glutTimerFunc(1,timer,0);
	gluOrtho2D(0, 100, 0, 100); //ukuran sumbu X dan Y
	glutMainLoop();
	return 0;
}
