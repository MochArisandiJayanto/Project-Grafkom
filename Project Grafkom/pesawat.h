#include <GL/gl.h> //Import library yang akan digunakan
#include <GL/glu.h>
#include <GL/glut.h> // library grafik dari opengl

class Pesawat
{
public:
    void pesawat(){
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
    }
};
