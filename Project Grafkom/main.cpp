#include <GL/gl.h> //Import library yang akan digunakan
#include <GL/glu.h>
#include <GL/glut.h> // library grafik dari opengl

void displayMe(void){ // yang akan ditampilkan
    glClear(GL_COLOR_BUFFER_BIT); //m membersihkan frame
    glBegin(GL_POLYGON); //awalan Line
    glColor3b(250,100,0); //kode warna
    glVertex2f(7, 6); //titik untuk line
    glVertex2f(7.39, 7.47); //titik untuk line
    glVertex2f(8, 8);
    glVertex2f(8.64, 7.4);
    glVertex2f(9, 6);
    glVertex2f(11, 5);
    glVertex2f(8.53, 5);
    glVertex2f(7.98, 5.49);
    glVertex2f(7.43, 5.02);
    glVertex2f(5, 5);
	glEnd();
	glutSwapBuffers(); // akhiran dari semua kodingan
}

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
	glutDisplayFunc(displayMe); //
	glutTimerFunc(1,timer,0);
	glutKeyboardFunc(myKeyboard);
	gluOrtho2D(0, 50, 0, 50); //ukuran sumbu X dan Y
	glutMainLoop();
	return 0;
}
