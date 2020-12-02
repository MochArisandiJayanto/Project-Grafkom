class Tes{
public:
    void drawTes(){
        glBegin(GL_POLYGON);
        glVertex2f(10 + random(1000), 15 + random(1000));
        glVertex2f(10 + random(1000), 20 + random(1000));
        glVertex2f(20 + random(1000), 20 + random(1000));
        glVertex2f(20 + random(1000), 15 + random(1000));
        glEnd();
    }
}
