#include <stdio.h>
#include <stdlib.h>
#include <GL/glut.h>
#include <cmath>
#define WINDOW_X (500)
#define WINDOW_Y (500)
#define WINDOW_NAME "test1"

void init_GL(int argc, char *argv[]);
void init();
void set_callback_functions();

void glut_display();
void glut_keyboard(unsigned char key, int x, int y);

void draw_square1();
void draw_square2();
void draw_square3();

// ã‚°ãƒ­ãƒ¼ãƒãƒ«å¤‰æ•°
int g_display_mode = 3;

double getX(int divNum, int a) {
        static const double pi = 3.141592653589793;
        return std::cos(2*pi*a/divNum);
}

double getY(int divNum, int b) {
        static const double pi = 3.141592653589793;
        return std::sin(2*pi*b/divNum);
}
void draw(int num){
        glBegin(GL_LINE_LOOP);

        for (int i=0;i<num;i++){
                glVertex2d(getX(num,i),getY(num,i));
        }
        glEnd();
}                 

int main(int argc, char *argv[]){
        /* OpenGLã®åˆæœŸåŒ– */
        init_GL(argc, argv);

        /* ã“ã®ãƒ—ãƒ­ã‚°ãƒ©ãƒ ç‰¹æœ‰ã®åˆæœŸåŒ– */
        init();

        /* ã‚³ãƒ¼ãƒ«ãƒãƒƒã‚¯é–¢æ•°ã®ç™»éŒ² */
        set_callback_functions();

        /* ãƒ¡ã‚¤ãƒ³ãƒ«ãƒ¼ãƒ— */
        glutMainLoop();
        return 0;
}

void init_GL(int argc, char *argv[]){
        glutInit(&argc, argv);
        glutInitDisplayMode(GLUT_RGBA);
        glutInitWindowSize(WINDOW_X, WINDOW_Y);
        glutCreateWindow(WINDOW_NAME);
}

void init(){
        glClearColor(0.0, 0.0, 0.0, 0.0);
}

void set_callback_functions(){
        glutDisplayFunc(glut_display);
        glutKeyboardFunc(glut_keyboard);
}

// ã‚­ãƒ¼ãƒœãƒ¼ãƒ‰ã«å¤‰åŒ–ãŒã‚ã£ãŸæ™‚ã«å‘¼ã³å‡ºã•ã‚Œã‚‹ã‚³ãƒ¼ãƒ«ãƒãƒƒã‚¯é–¢æ•°ã€‚
void glut_keyboard(unsigned char key, int x, int y){
        switch(key){

                case 'q':
                case 'Q':
                case '\033': // Escã‚­ãƒ¼ã®ã“ã¨
                        exit(0);
                case 'p':
                        g_display_mode++;
                        break;
                case 'm':
                        if (g_display_mode > 3){
                                g_display_mode--;
                        }
                        break;
                case '1':
                        glutPostRedisplay();
                        printf("cnt:%d\n", g_display_mode);
                        break;
        }

}

// ãƒ‡ã‚£ã‚¹ãƒ—ãƒ¬ã‚¤ã«å¤‰åŒ–ãŒã‚ã£ãŸæ™‚ã«å‘¼ã³å‡ºã•ã‚Œã‚‹ã‚³ãƒ¼ãƒ«ãƒãƒƒã‚¯é–¢æ•°ã€‚
// ã€Œãƒ‡ã‚£ã‚¹ãƒ—ãƒ¬ã‚¤ã«å¤‰åŒ–ãŒã‚ã£ãŸæ™‚ã€ã¯ã€glutPostRedisplay() ã§æŒ‡ç¤ºã™ã‚‹ã€‚
void glut_display(){
        glClear(GL_COLOR_BUFFER_BIT);
        draw(g_display_mode);
        glFlush();
}

void draw_square1(){
        glBegin(GL_LINE_LOOP);

        glColor3d(1.0, 0.0, 0.0);
        glVertex2d(-0.9, -0.9);
        glVertex2d(0.9, -0.9);
        glVertex2d(0.9, 0.9);
        glVertex2d(-0.9, 0.9);

        glEnd();
}

void draw_square2(){
        glBegin(GL_POLYGON);

        glColor3d(1.0, 0.0, 0.0);
        glVertex2d(-0.9, -0.9);
        glVertex2d(0.9, -0.9);
        glVertex2d(0.9, 0.9);
        glVertex2d(-0.9, 0.9);

        glEnd();
}

void draw_square3(){
        glBegin(GL_POLYGON);

        glColor3d(1.0, 0.0, 0.0);
        glVertex2d(-0.9, -0.9);
        glColor3d(1.0, 1.0, 0.0);
        glVertex2d(0.9, -0.9);
        glColor3d(0.0, 1.0, 1.0);
        glVertex2d(0.9, 0.9);
        glColor3d(0.0, 0.0, 0.0);
        glVertex2d(-0.9, 0.9);

        glEnd();
}


