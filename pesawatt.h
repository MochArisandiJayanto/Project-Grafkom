#ifndef PESAWAT_H
#define PESAWAT_H
#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include "pesawatt.h"


class pesawat{
    public:
        void pesawat2(){
            glClear(GL_COLOR_BUFFER_BIT);
            //DEPAN
            glBegin(GL_POLYGON);
            glColor3ub(169,169,169);
            glVertex2f(8.5, 1);//c
            glVertex2f(9, 2);//d
            glVertex2f(9, 5);//e
            glVertex2f(8, 2);//f
            glVertex2f(8, 5);//g
            glVertex2f(8.5, 4.5);//h
            glVertex2f(9, 5);
            glEnd();

            //pilot
            glBegin(GL_POLYGON);
            glColor3ub(255,0,0);//merah
            glVertex2f(8.5, 4.5);//h
            glVertex2f(9, 5);//e
            glVertex2f(9, 6);//j
            glVertex2f(8, 6);//i
            glVertex2f(8, 5);//g
            glEnd();

            //tubuh tengah
            glBegin(GL_POLYGON);
            glColor3ub(169,169,169);
            glVertex2f(9, 6);//j
            glVertex2f(8, 6);//i
            glVertex2f(8, 8.5);//k
            glVertex2f(9, 8.5);//l
            glEnd();

            glBegin(GL_POLYGON);
            glColor3ub(169,169,169);
            glVertex2f(8, 8.5);//k
            glVertex2f(9, 8.5);//l
            glVertex2f(9.4, 12.6);//q
            glVertex2f(8.5, 18);//r
            glVertex2f(7.6, 12.6);//s
            glEnd();

            glBegin(GL_POLYGON);
            glColor3ub(169,169,169);
            glVertex2f(9.36, 12.2);//s1
            glVertex2f(10, 12);//r1
            glVertex2f(10.5, 11);//q1
            glVertex2f(9.28, 11.4);//p1
            glEnd();

            glBegin(GL_POLYGON);
            glColor3ub(169,169,169);
            glVertex2f(7.64, 12.2);//w1
            glVertex2f(7, 12);//v1
            glVertex2f(6.5, 11);//u1
            glVertex2f(7.72, 11.4);//t1
            glEnd();

            //mesin kanan
            glBegin(GL_POLYGON);
            glColor3ub(255,0,0);
            glVertex2f(8.5, 21);//l3
            glVertex2f(9, 22);//s3
            glVertex2f(9.5, 22);//r3
            glVertex2f(9.6, 21.6);//q3
            glVertex2f(9.7, 19.7); //a2
            glVertex2f(9.72, 18.89); //d2
            glVertex2f(9.8, 16);//z1
            glVertex2f(8.5, 18);//r
            glEnd();

            //mesin kiri
            glBegin(GL_POLYGON);
            glColor3ub(255,0,0);
            glVertex2f(8.5, 21);//l3
            glVertex2f(8, 22);//k3
            glVertex2f(7.5, 22);//j3
            glVertex2f(7.4, 21.6);//i3
            glVertex2f(7.3, 19.7);//f2
            glVertex2f(7.32, 18.88); //k2
            glVertex2f(7.4, 16);//l2
            glVertex2f(8.5, 18);//r
            glEnd();

            //badan kanan
            glBegin(GL_POLYGON);
            glColor3ub(135,206,235);
            glVertex2f(8.5, 18);//r
            glVertex2f(9.8, 16);//z1
            glVertex2f(9.4, 12.6);//q
            glEnd();

            glBegin(GL_POLYGON);
            glColor3ub(135,206,235);
            glVertex2f(9.8, 16);//z1
            glVertex2f(10.15, 17);//e1
            glVertex2f(10.49, 17);//f1
            glVertex2f(10.49, 15.47); //m1
            glVertex2f(10.5, 12.5); //h1
            glVertex2f(9.4, 12.6);//q
            glEnd();

            glBegin(GL_POLYGON);
            glColor3ub(135,206,235);
            glVertex2f(9.4, 12.6);//q
            glVertex2f(9.36, 12.2);//s1
            glVertex2f(10, 12);//r1
            glVertex2f(10.5, 12.5);//h1
            glEnd();

            glBegin(GL_POLYGON);
            glVertex2f(10.5, 12.5);//h1
            glVertex2f(10, 12);//r1
            glVertex2f(10.5, 11);//q1
            glVertex2f(10.5, 11.5); //g1
            glEnd();

            glBegin(GL_POLYGON);
            glColor3ub(135,206,235);
            glVertex2f(10.89, 12);//t
            glVertex2f(10.5, 11.5); //g1
            glVertex2f(10.5, 11);//q1
            glVertex2f(10.64, 9.65); //m
            glEnd();

            glBegin(GL_POLYGON);
            glColor3ub(135,206,235);
            glVertex2f(9, 6);//j
            glVertex2f(10.64, 9.65); //m
            glVertex2f(10.5, 11);//q1
            glVertex2f(9.28, 11.4);//p1
            glVertex2f(9, 8.5);//l
            glEnd();

            //badan kiri
            glBegin(GL_POLYGON);
            glColor3ub(135,206,235);
            glVertex2f(8.5, 18);//r
            glVertex2f(7.4, 16);//i2
            glVertex2f(7.6, 12.6);//s
            glEnd();

            glBegin(GL_POLYGON);
            glColor3ub(135,206,235);
            glVertex2f(7.4, 16);//i2
            glVertex2f(7, 17);//s2
            glVertex2f(6.5, 17);//u2
            glVertex2f(6.5, 15.48); //v2
            glVertex2f(6.5, 12.5); //t2
            glVertex2f(7.6, 12.6);//s
            glEnd();

            glBegin(GL_POLYGON);
            glColor3ub(135,206,235);
            glVertex2f(7.6, 12.6);//s
            glVertex2f(7.64, 12.2);//w1
            glVertex2f(7, 12);//v1
            glVertex2f(6.5, 12.5);//t2
            glEnd();

            glBegin(GL_POLYGON);
            glVertex2f(6.5, 12.5);//t2
            glVertex2f(7, 12);//v1
            glVertex2f(6.5, 11);//u1
            glVertex2f(6.5, 11.5); //i1
            glEnd();

            glBegin(GL_POLYGON);
            glColor3ub(135,206,235);
            glVertex2f(6.29, 11.81);//l2
            glVertex2f(6.5, 11.5); //i1
            glVertex2f(6.5, 11);//u1
            glVertex2f(6.32, 9.77); //n
            glEnd();

            glBegin(GL_POLYGON);
            glColor3ub(135,206,235);
            glVertex2f(8, 6);//i
            glVertex2f(6.32, 9.77); //n
            glVertex2f(6.5, 11);//u1
            glVertex2f(7.72, 11.4);//t1
            glVertex2f(8, 8.5);//k
            glEnd();


            //SAYAP KANAN
            glBegin(GL_POLYGON);
            glColor3ub(255,0,0);
            glVertex2f(10.5, 12.5);//h1
            glVertex2f(11, 13);//o
            glVertex2f(10.8, 11.93);//t
            glVertex2f(10.5, 11.5); //g1
            glEnd();

            glBegin(GL_POLYGON);
            glColor3ub(255,255,255);
            glVertex2f(11, 13);//o
            glVertex2f(10.8, 11.93);//t
            glVertex2f(16,14.5);//w
            glVertex2f(16, 14.81);//v
            glEnd();

            glBegin(GL_POLYGON);
            glColor3ub(169,169,169);
            glVertex2f(14.01, 15.68);//b
            glVertex2f(10.49, 15.47); //m1
            glVertex2f(10.5, 12.5);//h1
            glVertex2f(11, 13);//o
            glVertex2f(14, 14);//k1
            glEnd();

            glBegin(GL_POLYGON);
            glColor3ub(255,0,0);
            glVertex2f(16, 15.8);//l1
            glVertex2f(14.01, 15.68);//b
            glVertex2f(14, 14);//k1
            glVertex2f(16, 14.81);//v
            glEnd();

            glBegin(GL_POLYGON);
            glColor3ub(255,0,0);
            glVertex2f(10.49, 17);//f1
            glVertex2f(13.39, 17);//n1
            glVertex2f(13.42, 15.65);//a
            glVertex2f(10.49, 15.47); //m1
            glEnd();

            glBegin(GL_POLYGON);
            glColor3ub(169,169,169);
            glVertex2f(13.39, 17);//n1
            glVertex2f(13.42, 15.65);//a
            glVertex2f(16, 15.8);//l1
            glVertex2f(16, 17);//d1
            glEnd();

            //SAYAP Kiri
            glBegin(GL_POLYGON);
            glColor3ub(255,0,0);
            glVertex2f(6.5, 12.5);//t2
            glVertex2f(6.26, 12.67);//p
            glVertex2f(6.29, 11.81);//l2
            glVertex2f(6.5, 11.5); //i1
            glEnd();

            glBegin(GL_POLYGON);
            glColor3ub(255,255,255);
            glVertex2f(6.26, 12.67);//p
            glVertex2f(6.29, 11.81);//l2
            glVertex2f(1, 14.5);//m2
            glVertex2f(1, 15.06);//b3
            glEnd();

            glBegin(GL_POLYGON);
            glColor3ub(169,169,169);
            glVertex2f(3.02, 15.81);//d3
            glVertex2f(6.5, 15.48); //v2
            glVertex2f(6.5, 12.5);//t2
            glVertex2f(6.26, 12.67);//p
            glVertex2f(3.02, 14.14);//c3
            glEnd();

            glBegin(GL_POLYGON);
            glColor3ub(255,0,0);
            glVertex2f(1, 16);//w2
            glVertex2f(3.02, 15.81);//d3
            glVertex2f(3.02, 14.14);//c3
            glVertex2f(1, 15.06);//b3
            glEnd();

            glBegin(GL_POLYGON);
            glColor3ub(255,0,0);
            glVertex2f(6.5, 17);//u2
            glVertex2f(3.62, 17);//z2
            glVertex2f(3.59, 15.76);//a3
            glVertex2f(6.5, 15.48); //v2
            glEnd();

            glBegin(GL_POLYGON);
            glColor3ub(169,169,169);
            glVertex2f(3.62, 17);//z2
            glVertex2f(3.59, 15.76);//a3
            glVertex2f(1, 16);//w2
            glVertex2f(1, 17);//r2
            glEnd();


            //rudal kanan
            glBegin(GL_POLYGON);
            glColor3ub(255,200,0);
            glVertex2f(16, 16.5);//c1
            glVertex2f(16.5, 16.5);//b1
            glVertex2f(16.5, 14.5);//a1
            glVertex2f(16.25, 14);//z
            glVertex2f(16,14.5);//w
            glEnd();

            //rudal kiri
            glBegin(GL_POLYGON);
            glColor3ub(255,200,0);
            glVertex2f(1, 16.5);//q2
            glVertex2f(0.5, 16.5);//p2
            glVertex2f(0.5, 14.5);//o2
            glVertex2f(0.7, 14);//n2
            glVertex2f(1, 14.5);//m2
            glEnd();


            //ekor kanan
            glBegin(GL_POLYGON);
            glColor3ub(169,169,169);
            glVertex2f(9.8, 16);//z1
            glVertex2f(10.66, 18.49);//c2
            glVertex2f(10.61, 19.61);//e2
            glVertex2f(9.72, 18.89);//d2
            glEnd();

            glBegin(GL_POLYGON);
            glColor3ub(255,100,0);
            glVertex2f(10.58, 20.21);//b2
            glVertex2f(9.7, 19.7);//a2
            glVertex2f(9.72, 18.89);//d2
            glVertex2f(10.61, 19.61);//e2
            glEnd();

            glBegin(GL_POLYGON);
            glColor3ub(255,255,255);
            glVertex2f(12.09, 22.83);//p3
            glVertex2f(9.6, 21.6);//q3
            glVertex2f(9.7, 19.7);//a2
            glVertex2f(10.58, 20.21);//b2
            glEnd();

            glBegin(GL_POLYGON);
            glVertex2f(12.09, 22.83);//p3
            glVertex2f(12.66, 22.5);//o3
            glVertex2f(12.68, 21.14);//n3
            glVertex2f(10.63, 19.04);//m3
            glVertex2f(10.58, 20.21);//b2
            glEnd();

            //ekor kiri
            glBegin(GL_POLYGON);
            glColor3ub(169,169,169);
            glVertex2f(7.4, 16);//i1
            glVertex2f(6.36, 18.61);//h2
            glVertex2f(6.36, 19.57);//j3
            glVertex2f(7.32, 18.88);//k2
            glEnd();

            glBegin(GL_POLYGON);
            glColor3ub(255,100,0);
            glVertex2f(6.36, 20.23);//g2
            glVertex2f(7.3, 19.7);//f2
            glVertex2f(7.32, 18.88);//k2
            glVertex2f(6.36, 19.57);//j3
            glEnd();

            glBegin(GL_POLYGON);
            glColor3ub(255,255,255);
            glVertex2f(4.87, 22.82);//h3
            glVertex2f(7.4, 21.6);//i3
            glVertex2f(7.3, 19.7);//f2
            glVertex2f(6.36, 20.23);//g2
            glEnd();

            glBegin(GL_POLYGON);
            glColor3ub(255,255,255);
            glVertex2f(4.87, 22.82);//h3
            glVertex2f(4.32, 22.52);//g3
            glVertex2f(4.36, 21.15);//f3
            glVertex2f(6.36, 19.09);//e3
            glVertex2f(6.36, 20.23);//g2
            glEnd();
        glutSwapBuffers();

}
};

int main(int argc, char** argv){
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);
	glutInitWindowSize(1368, 728);
	glutInitWindowPosition(0,0);
	glutCreateWindow("ANUGERAH_3083");
	glutDisplayFunc(pesawatt();
	gluOrtho2D(0, 28, 0, 28);
	glutMainLoop();
	return 0;
}
#endif // PESAWAT_H
