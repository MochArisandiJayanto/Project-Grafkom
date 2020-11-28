class Pesawat{
    public:
        void drawPesawat() {
            glBegin(GL_POLYGON);
            glColor3f(0,0,0);
            glVertex2f(7, 6); //titik untuk line
            glVertex2f(7.39, 7.47); //titik untuk line
            glVertex2f(7, 8);
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

