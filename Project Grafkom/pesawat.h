class Pesawat{
    public:
        void drawPesawat() {
            glBegin(GL_POLYGON); //ujung pesawat
            glColor3f(0,0,0);
            glVertex2f(22.9, 17.86);
            glVertex2f(22.4, 16.72);
            glVertex2f(22.21, 15.23);
            glVertex2f(22.92, 15.31);
            glVertex2f(23.54, 15.19);
            glVertex2f(23.41, 16.68);
            glEnd();

            glBegin(GL_POLYGON); //badan tengah
            glColor3f(0.75,0.75,0.75);
            glVertex2f(22.21, 15.23);
            glVertex2f(22.02, 12.79);
            glVertex2f(22.04, 8.77);
            glVertex2f(23.68, 8.75);
            glVertex2f(23.78, 12.88);
            glVertex2f(23.54, 15.19);
            glVertex2f(22.92, 15.31);
            glEnd();

            glBegin(GL_POLYGON); //badan pinggir kiri
            glColor3f(0,0,0);
            glVertex2f(22.02, 12.79);
            glVertex2f(21.79, 12.02);
            glVertex2f(21.58, 11.64);
            glVertex2f(21.64, 8.75);
            glVertex2f(22.04, 8.77);
            glEnd();

            glBegin(GL_POLYGON); //badan pinggir kanan
            glColor3f(0,0,0);
            glVertex2f(23.78, 12.79);
            glVertex2f(24, 12);
            glVertex2f(24.17, 11.65);
            glVertex2f(24.15, 8.75);
            glVertex2f(23.68, 8.75);
            glEnd();

            glBegin(GL_POLYGON); //badan sayap kiri atas
            glColor3f(1,0,0);
            glVertex2f(21.58, 11.64);
            glVertex2f(20.3, 10.25);
            glVertex2f(20.3, 9.81);
            glVertex2f(21.61, 10);
            glEnd();

            glBegin(GL_POLYGON); //badan sayap kanan atas
            glColor3f(1,0,0);
            glVertex2f(24.17, 11.64);
            glVertex2f(25.47, 10.25);
            glVertex2f(25.47, 9.81);
            glVertex2f(24.16, 10);
            glEnd();

            glBegin(GL_POLYGON); //badan bawah
            glColor3f(0.5,0,0);
            glVertex2f(21.61, 8.77);
            glVertex2f(21.59, 5.97);
            glVertex2f(24.16, 5.95);
            glVertex2f(24.15, 8.77);
            glEnd();

            glBegin(GL_POLYGON); //badan sayap kiri bawah
            glColor3f(0.75,0.75,0.75);
            glVertex2f(21.6, 10);
            glVertex2f(17.44, 6.28);
            glVertex2f(17.44, 4.99);
            glVertex2f(21.59, 6.65);
            glEnd();

            glBegin(GL_POLYGON); //badan sayap kiri bawah, model atas
            glColor3f(0,0,0);
            glVertex2f(21.6, 10);
            glVertex2f(17.83, 6.63);
            glVertex2f(17.85, 6.43);
            glVertex2f(21.6, 9.44);
            glEnd();

            glBegin(GL_POLYGON); //badan sayap kiri bawah, model bawah
            glColor3f(1,0,0);
            glVertex2f(21.59, 6.65);
            glVertex2f(17.44, 4.99);
            glVertex2f(17.46, 4.71);
            glVertex2f(21.59, 5.97);
            glEnd();

            glBegin(GL_POLYGON); //badan sayap kiri bawah, model bawah 1
            glColor3f(1.0,1.0,1.0);
            glVertex2f(21.59, 6.65);
            glVertex2f(18.77, 5.52);
            glVertex2f(18.77, 5.36);
            glVertex2f(21.59, 6.28);
            glEnd();

            glBegin(GL_POLYGON); //badan sayap kiri bawah, model bawah 2
            glColor3f(1.0,0.5,0.0);
            glVertex2f(21.59, 6.28);
            glVertex2f(18.77, 5.36);
            glVertex2f(18.81, 5.12);
            glVertex2f(21.59, 5.97);
            glEnd();

            glBegin(GL_POLYGON); //badan sayap kanan bawah
            glColor3f(0.75,0.75,0.75);
            glVertex2f(24.16, 10.02);
            glVertex2f(28.3, 6.24);
            glVertex2f(28.3, 5.02);
            glVertex2f(24.16, 6.64);
            glEnd();

            glBegin(GL_POLYGON); //badan sayap kanan bawah, model atas
            glColor3f(0,0,0);
            glVertex2f(24.16, 10.02);
            glVertex2f(27.91, 6.6);
            glVertex2f(27.89, 6.36);
            glVertex2f(24.16, 9.4);
            glEnd();

            glBegin(GL_POLYGON); //badan sayap kanan bawah, model bawah
            glColor3f(1,0,0);
            glVertex2f(24.16, 6.64);
            glVertex2f(28.3, 5.02);
            glVertex2f(28.3, 4.73);
            glVertex2f(24.16, 5.95);
            glEnd();

            glBegin(GL_POLYGON); //badan sayap kanan bawah, model bawah 1
            glColor3f(1,1,1);
            glVertex2f(24.16, 6.64);
            glVertex2f(27.01, 5.53);
            glVertex2f(26.95, 5.31);
            glVertex2f(24.16, 6.26);
            glEnd();

            glBegin(GL_POLYGON); //badan sayap kanan bawah, model bawah 2
            glColor3f(1.0,0.5,0.0);
            glVertex2f(24.16, 6.26);
            glVertex2f(26.95, 5.31);
            glVertex2f(26.95, 5.13);
            glVertex2f(24.16, 5.95);
            glEnd();

            glBegin(GL_POLYGON); //badan bawah (bokong)
            glColor3f(0,0,0);
            glVertex2f(22.03, 5.97);
            glVertex2f(22.03, 3.5);
            glVertex2f(23.68, 3.5);
            glVertex2f(23.73, 5.95);
            glEnd();

            glBegin(GL_POLYGON); //badan bawah (bokong) kanan
            glColor3f(1,0,0);
            glVertex2f(23.73, 5.95);
            glVertex2f(24.16, 5.95);
            glVertex2f(24.07, 5.65);
            glVertex2f(24.15, 3.18);
            glVertex2f(23.89, 3.18);
            glVertex2f(23.69, 3.5);
            glEnd();

            glBegin(GL_POLYGON); //badan bawah (bokong) kiri
            glColor3f(1,0,0);
            glVertex2f(22.03, 5.97);
            glVertex2f(21.59, 5.97);
            glVertex2f(21.68, 5.57);
            glVertex2f(21.57, 3.19);
            glVertex2f(21.85, 3.19);
            glVertex2f(22, 3.51);
            glEnd();

            glBegin(GL_POLYGON); //sayap kiri paling bawah, model 1
            glColor3f(0,0,0);
            glVertex2f(21.59, 5.97);
            glVertex2f(20.68, 3.04);
            glVertex2f(20.72, 2.43);
            glVertex2f(21.57, 3.19);
            glVertex2f(21.68, 5.57);
            glVertex2f(21.59, 5.97);
            glEnd();

            glBegin(GL_POLYGON); //sayap kiri paling bawah, model 2
            glColor3f(1,1,1);
            glVertex2f(21.53, 5.79);
            glVertex2f(20.84, 3.54);
            glVertex2f(20.89, 3.45);
            glVertex2f(21.61, 5.52);
            glEnd();

            glBegin(GL_POLYGON); //sayap kiri paling bawah, model 3
            glColor3f(0.75,0.75,0.75);
            glVertex2f(21.68, 5.57);
            glVertex2f(21.61, 5.52);
            glVertex2f(20.89, 3.45);
            glVertex2f(20.91, 2.6);
            glVertex2f(21.57, 3.19);
            glEnd();

            glBegin(GL_POLYGON); //sayap kiri paling bawah, model 4
            glColor3f(1,0,0);
            glVertex2f(21.43, 3.58);
            glVertex2f(21, 2.94);
            glVertex2f(21.03, 2.71);
            glVertex2f(21.49, 3.12);
            glVertex2f(21.52, 3.55);
            glEnd();

            glBegin(GL_POLYGON); //sayap kiri paling bawah, model atas
            glColor3f(0,0,0);
            glVertex2f(21.53, 5.79);
            glVertex2f(19.61, 4.36);
            glVertex2f(20.06, 3.19);
            glVertex2f(20.75, 3.26);
            glEnd();

            glBegin(GL_POLYGON); //sayap kanan paling bawah, model atas
            glColor3f(0,0,0);
            glVertex2f(24.22, 5.79);
            glVertex2f(26.11, 4.36);
            glVertex2f(25.65, 3.19);
            glVertex2f(24.98, 3.24);
            glEnd();

            glBegin(GL_POLYGON); //sayap kanan paling bawah
            glColor3f(0,0,0);
            glVertex2f(24.16, 5.95);
            glVertex2f(25.06, 2.97);
            glVertex2f(25, 2.43);
            glVertex2f(24.15, 3.18);
            glEnd();

            glBegin(GL_POLYGON); //sayap kanan paling bawah, model 1
            glColor3f(1,1,1);
            glVertex2f(24.22, 5.76);
            glVertex2f(24.89, 3.53);
            glVertex2f(24.83, 3.45);
            glVertex2f(24.15, 5.51);
            glEnd();

            glBegin(GL_POLYGON); //sayap kanan paling bawah, model 2
            glColor3f(0.75,0.75,0.75);
            glVertex2f(24.07, 5.65);
            glVertex2f(24.15, 5.51);
            glVertex2f(24.83, 3.45);
            glVertex2f(24.8, 2.61);
            glVertex2f(24.15, 3.18);
            glEnd();

            glBegin(GL_POLYGON); //sayap kanan paling bawah, model 3
            glColor3f(1,0,0);
            glVertex2f(24.32, 3.57);
            glVertex2f(24.72, 2.96);
            glVertex2f(24.71, 2.69);
            glVertex2f(24.21, 3.13);
            glVertex2f(24.21, 3.56);
            glEnd();

            glBegin(GL_POLYGON); //knalpot
            glColor3f(0.75,0.75,0.75);
            glVertex2f(22, 3.51);
            glVertex2f(22.52, 2.23);
            glVertex2f(23.22, 2.25);
            glVertex2f(23.69, 3.5);
            glEnd();

            glBegin(GL_POLYGON); //tempat pilot
            glColor3f(0,0,0);
            glVertex2f(22.91, 14.99);
            glVertex2f(22.69, 14.85);
            glVertex2f(22.5, 14.45);
            glVertex2f(22.38, 13.07);
            glVertex2f(22.35, 10.82);
            glVertex2f(22.43, 10.34);
            glVertex2f(22.73, 10.03);
            glVertex2f(22.74, 9.85);
            glVertex2f(23.01, 9.85);
            glVertex2f(23, 10.03);
            glVertex2f(23.33, 10.31);
            glVertex2f(23.4, 10.56);
            glVertex2f(23.45, 11.83);
            glVertex2f(23.3, 14.48);
            glVertex2f(23.1, 14.87);
            glEnd();

            glBegin(GL_POLYGON); //tempat pilot, model bawah
            glColor3f(1,1,1);
            glVertex2f(22.36, 11.58);
            glVertex2f(22.41, 10.86);
            glVertex2f(22.46, 10.47);
            glVertex2f(22.61, 10.23);
            glVertex2f(22.79, 10.15);
            glVertex2f(22.97, 10.14);
            glVertex2f(23.18, 10.25);
            glVertex2f(23.44, 10.88);
            glVertex2f(23.32, 10.55);
            glVertex2f(23.41, 11.67);
            glVertex2f(23.39, 11.89);
            glVertex2f(23.21, 11.97);
            glVertex2f(22.9, 11.99);
            glVertex2f(22.58, 11.97);
            glVertex2f(22.37, 11.9);
            glEnd();

            glBegin(GL_POLYGON); //tempat pilot, model atas
            glColor3f(1,1,1);
            glVertex2f(22.89, 14.86);
            glVertex2f(22.77, 14.81);
            glVertex2f(22.66, 14.65);
            glVertex2f(22.55, 14.31);
            glVertex2f(22.45, 13.86);
            glVertex2f(22.38, 13.08);//
            glVertex2f(22.37, 12.04);
            glVertex2f(22.62, 12.1);
            glVertex2f(22.9, 12.12);
            glVertex2f(23.18, 12.09);
            glVertex2f(23.4, 12.03);
            glVertex2f(23.38, 13.14);
            glVertex2f(23.32, 13.9);
            glVertex2f(23.25, 14.34);
            glVertex2f(23.11, 14.68);
            glVertex2f(23, 14.8);
            glEnd();
        }
};

