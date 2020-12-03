class Peluru{
    public:
        void drawPeluru(){
            glBegin(GL_POLYGON);//ujung peluru
            glColor3ub(255, 215, 0);
            glVertex2f(3.49, 5.85);
            glVertex2f(3.35, 5.36);
            glVertex2f(3.29, 4.84);
            glVertex2f(3.69, 4.83);
            glVertex2f(3.63, 5.35);
            glEnd();


            glBegin(GL_POLYGON);//ujung peluru 2
            glColor3ub(255,255,0);
            glVertex2f(3.29, 4.84);
            glVertex2f(3.69, 4.84);
            glVertex2f(3.68, 4.44);
            glVertex2f(3.28, 4.44);
            glEnd();

            glBegin(GL_POLYGON);//ujung peluru 3
            glColor3f(0, 0, 0);
            glVertex2f(3.68, 4.44);
            glVertex2f(3.28, 4.44);
            glVertex2f(3.2, 4.2);
            glVertex2f(3.8, 4.2);
            glEnd();

            glBegin(GL_POLYGON);//tengah peluru
            glColor3ub(255,255,0);
            glVertex2f(3.2, 4.2);
            glVertex2f(3.8, 4.2);
            glVertex2f(3.79, 2.59);
            glVertex2f(3.2, 2.59);
            glEnd();

            glBegin(GL_POLYGON);//bawah peluru
            glColor3f(0,0,0);
            glVertex2f(3.79, 2.59);
            glVertex2f(3.2, 2.59);
            glVertex2f(3.28, 2.35);
            glVertex2f(3.72, 2.35);
            glEnd();

            glBegin(GL_POLYGON);//bawah peluru 2
            glColor3f(0,0,0);
            glVertex2f(3.28, 2.35);
            glVertex2f(3.72, 2.35);
            glVertex2f(3.72, 2.21);
            glVertex2f(3.28, 2.21);
            glEnd();
        }

        void manggilPeluru(){

            glPushMatrix();
            glTranslatef(15, peluruMulai[0], 0);
            drawPeluru();
            glPopMatrix();

            glPushMatrix();
            glTranslatef(24, peluruMulai[0], 0);
            drawPeluru();
            glPopMatrix();
        }
        float peluruMulai[1] = {10};

        void movePeluru(){
            peluruMulai[0] += 0.05;

            for (int i = 0; i <= sizeof(peluruMulai); i++){
                if (peluruMulai[i] >= 100){
                    peluruMulai[i] = 5;
                }
            }
        }
};
