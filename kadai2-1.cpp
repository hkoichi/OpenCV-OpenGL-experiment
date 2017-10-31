#include <stdio.h>
#include <stdlib.h>
#include <GL/glut.h>

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
int g_display_mode = 1;

int main(int argc, char *argv[]){
        /* OpenGLã®åˆæœŸåŒ– */
        init_GL(argc, argv);

        /* ã“ã®ãƒ—ãƒ­ã‚°ãƒ©ãƒ ç‰¹æœ‰ã®åˆæœŸåŒ– */
        init();

        /* ã‚³ãƒ¼ãƒ«ãƒãƒƒã‚¯é–¢æ•°ã®ç™»éŒ² */
        set_callback_functions();

        /* ãƒ¡ã‚¤ãƒ³ãƒ«ãƒ¼ãƒ— */
        /* hatena */    // ç„¡é™ãƒ«ãƒ¼ãƒ—ã€‚ã‚³ãƒ¼ãƒ«ãƒãƒƒã‚¯é–¢æ•°ãŒå‘¼ã°ã‚Œã‚‹ã¾ã§ãšã£ã¨å®Ÿè¡Œã•ã‚Œã‚‹ã€‚

        return 0;
}

void init_GL(int argc, char *argv[]){
        /* hatena */    // OpenGLã®åˆæœŸåŒ–
        /* hatena */    // ãƒ‡ã‚£ã‚¹ãƒ—ãƒ¬ã‚¤ãƒ¢ãƒ¼ãƒ‰ã‚’RGBAãƒ¢ãƒ¼ãƒ‰ã«è¨­å®š
        /* hatena */    // ã‚¦ã‚£ãƒ³ãƒ‰ã‚¦ã‚µã‚¤ã‚ºã‚’æŒ‡å®š
        /* hatena */    // ã‚¦ã‚£ãƒ³ãƒ‰ã‚¦ã‚’ã€Œç”Ÿæˆã€ã€‚ã¾ã ã€Œè¡¨ç¤ºã€ã¯ã•ã‚Œãªã„ã€‚
}

void init(){
        /* hatena */    // èƒŒæ™¯ã®å¡—ã‚Šã¤ã¶ã—è‰²ã‚’æŒ‡å®š
}

void set_callback_functions(){
        /* hatena */    // ãƒ‡ã‚£ã‚¹ãƒ—ãƒ¬ã‚¤ã«å¤‰åŒ–ãŒã‚ã£ãŸæ™‚ã«å‘¼ã°ã‚Œã‚‹ã‚³ãƒ¼ãƒ«ãƒãƒƒã‚¯é–¢æ•°ã‚’ç™»éŒ²
        /* hatena */    // ã‚­ãƒ¼ãƒœãƒ¼ãƒ‰ã«å¤‰åŒ–ãŒã‚ã£ãŸæ™‚ã«å‘¼ã³å‡ºã•ã‚Œã‚‹ã‚³ãƒ¼ãƒ«ãƒãƒƒã‚¯é–¢æ•°ã‚’ç™»éŒ²
}

// ã‚­ãƒ¼ãƒœãƒ¼ãƒ‰ã«å¤‰åŒ–ãŒã‚ã£ãŸæ™‚ã«å‘¼ã³å‡ºã•ã‚Œã‚‹ã‚³ãƒ¼ãƒ«ãƒãƒƒã‚¯é–¢æ•°ã€‚
void glut_keyboard(unsigned char key, int x, int y){
        switch(key){

                case 'q':
                case 'Q':
                case '\033': // Escã‚­ãƒ¼ã®ã“ã¨
                        exit(0);
                case '1':
                        g_display_mode = 1;
                        break;
                case '2':
                        g_display_mode = 2;
                        break;
                case '3':
                        g_display_mode = 3;
                        break;
        }

        /* hatena */  // ã€Œãƒ‡ã‚£ã‚¹ãƒ—ãƒ¬ã‚¤ã®ã‚³ãƒ¼ãƒ«ãƒãƒƒã‚¯é–¢æ•°ã‚’å‘¼ã‚“ã§ã€ã¨æŒ‡ç¤ºã™ã‚‹ã€‚
}

// ãƒ‡ã‚£ã‚¹ãƒ—ãƒ¬ã‚¤ã«å¤‰åŒ–ãŒã‚ã£ãŸæ™‚ã«å‘¼ã³å‡ºã•ã‚Œã‚‹ã‚³ãƒ¼ãƒ«ãƒãƒƒã‚¯é–¢æ•°ã€‚
// ã€Œãƒ‡ã‚£ã‚¹ãƒ—ãƒ¬ã‚¤ã«å¤‰åŒ–ãŒã‚ã£ãŸæ™‚ã€ã¯ã€glutPostRedisplay() ã§æŒ‡ç¤ºã™ã‚‹ã€‚
void glut_display(){
        /* hatena */  // ä»Šã¾ã§ç”»é¢ã«æã‹ã‚Œã¦ã„ãŸã‚‚ã®ã‚’æ¶ˆã™

        switch(g_display_mode){
                case 1:
                        draw_square1();
                        break;
                case 2:
                        draw_square2();
                        break;
                case 3:
                        draw_square3();
                        break;
        }

        /* hatena */  // ã“ã“ã§ç”»é¢ã«æç”»ã‚’ã™ã‚‹
}

void draw_square1(){
        /* hatena */

        /* hatena */
        /* hatena */
        /* hatena */
        /* hatena */
        /* hatena */

        /* hatena */
}

void draw_square2(){
        /* hatena */

        /* hatena */  
        /* hatena */
        /* hatena */
        /* hatena */
        /* hatena */

        /* hatena */
}

void draw_square3(){
        /* hatena */

        /* hatena */
        /* hatena */
        /* hatena */
        /* hatena */
        /* hatena */
        /* hatena */
        /* hatena */
        /* hatena */

        /* hatena */
}
