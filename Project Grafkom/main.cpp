#include <GL/gl.h> //Import library yang akan digunakan
#include <GL/glu.h>
#include <GL/glut.h> // library grafik dari opengl
#include <ctime>
#include <windows.h>
#include <iostream>
#include <ostream>
#include "pesawat.h"
#include "awan.h"
#include "peluru.h"
#include "pesawatt.h"

Pesawat pesawat;
Awan awan;
Peluru peluru;
Pesawatt pesawatt;

float x;
float y;
float ranX = (rand() % 40 + 5);
float ranY = 120;
float peluruX;
float peluruY;
float ujung = 5;

void timer(int data)
{
    awan.moveAwan();

    peluru.movePeluru();

    if(peluru.peluruMulai[0] == ujung){
        peluruX = x;
        peluruY = y;
    }

    if(GetAsyncKeyState(VK_LEFT)){
        if (x>=-17){
            x -= 0.1f;
        }
    }
    //
    else if(GetAsyncKeyState(VK_RIGHT)){
        if (x<=71) {
            x+=0.1f;
        }
    }

    //
    if(GetAsyncKeyState(VK_UP)){
        if (y<=82) {
            y+=0.1f;
        }
    }
    //
    else if (GetAsyncKeyState(VK_DOWN)){
        if (y>=0){
            y-=0.1f;
        }
    }

        // enemy spawn di posisi berbeda ketika keluar window
    srand((unsigned) time(0)); //srand supaya tiap pemanggilan random valuenya selalu berubah
    if (ranY >= -30) {
        ranY -= 0.03f;
        //cout << "x1 = " << x1 << endl;
    } else if (ranY < -30) {
        ranY = 120;
        ranX = (rand() % 80);
        //cout << "ranY = " << ranY;
    }

    //collision musuh
    if(
        ((peluru.posisiPelurux[0] <= pesawatt.posisiPesawattx[0] && peluru.posisiPelurux[0] <= pesawatt.posisiPesawattx[1]) && (peluru.posisiPeluruy[0] <= pesawatt.posisiPesawatty[0] && peluru.posisiPeluruy[0] <= pesawatt.posisiPesawatty[1])) ||
        ((peluru.posisiPelurux[1] <= pesawatt.posisiPesawattx[0] && peluru.posisiPelurux[1] <= pesawatt.posisiPesawattx[1]) && (peluru.posisiPeluruy[0] <= pesawatt.posisiPesawatty[0] && peluru.posisiPeluruy[0] <= pesawatt.posisiPesawatty[1])) ||
        ((peluru.posisiPelurux[1] <= pesawatt.posisiPesawattx[0] && peluru.posisiPelurux[1] <= pesawatt.posisiPesawattx[1]) && (peluru.posisiPeluruy[1] <= pesawatt.posisiPesawatty[1] && peluru.posisiPeluruy[1] <= pesawatt.posisiPesawatty[1])) ||
        ((peluru.posisiPelurux[0] <= pesawatt.posisiPesawattx[0] && peluru.posisiPelurux[0] <= pesawatt.posisiPesawattx[1]) && (peluru.posisiPeluruy[1] <= pesawatt.posisiPesawatty[0] && peluru.posisiPeluruy[1] <= pesawatt.posisiPesawatty[1]))
    )
    {
        std::cout << "Test coll";
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
    glTranslatef(ranX,ranY,0);
    //pesawatt.colPesawatt();
    pesawatt.drawPesawatt();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(peluruX, peluruY, 0);
    peluru.manggilPeluru();
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
	glColor3f(0.0, 0.0, 0.0);
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
}

int main(int argc, char** argv){
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);
	glutInitWindowSize(900, 600);
	glutInitWindowPosition(50, 0);
	glutCreateWindow("Jaya");
	glutDisplayFunc(displayMe);
	myinit();
	glutTimerFunc(1,timer,0);
	gluOrtho2D(0, 100, 0, 100);
	glutMainLoop();
	return 0;
}
