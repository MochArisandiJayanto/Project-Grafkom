#include <GL/gl.h> //Import library yang akan digunakan
#include <GL/glu.h>
#include <GL/glut.h> // library grafik dari opengl

#include "pesawat.h"
using namespace std;


void myKeyboard(unsigned char key, int x, int y){
    if(key=='w' || key=='W'){ //ketika menekan w, maka object akan bergerak vertikal ke atas
        glTranslatef(0,1,0);
    } else if(key=='s' || key=='S'){ //ketika menekan s, maka object akan bergerak vertikal ke bawah
        glTranslatef(0,-1,0);
    }
    if(key=='a' || key=='A'){ //ketika menekan a, maka object akan bergerak horizontal ke kiri
        glTranslatef(-1,0,0);
    } else if(key=='d' || key=='D'){ //ketika menekan d, maka object akan bergerak horizontal ke kanan
        glTranslatef(1,0,0);
    }
}

void timer(int value){
    glutPostRedisplay();
    glutTimerFunc(1,timer,0);
}

int main(int argc, char** argv){ // atur display
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);
	glutInitWindowSize(500, 500); // ukuran display
	glutInitWindowPosition(0, 0); // posisi program
	glutCreateWindow("Jaya"); // nama window
	//glutDisplayFunc(displayMe); //
	glutTimerFunc(1,timer,0);
	glutKeyboardFunc(myKeyboard);
	gluOrtho2D(0, 50, 0, 50); //ukuran sumbu X dan Y
	glutMainLoop();
	Pesawat();
	return 0;
}
