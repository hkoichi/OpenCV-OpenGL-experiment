#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <GL/glut.h>
#include <opencv2/opencv.hpp>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>

#define WINDOW_X (500)
#define WINDOW_Y (500)
#define WINDOW_NAME "test5"
#define TEXTURE_HEIGHT (512)
#define TEXTURE_WIDTH (512)

void init_GL(int argc, char *argv[]);
void init();
void set_callback_functions();

void glut_display();
void glut_keyboard(unsigned char key, int x, int y);
void glut_mouse(int button, int state, int x, int y);
void glut_motion(int x, int y);
void glut_idle();
void draw_pyramid();
void set_texture();
void setTextureNum(int n);

// グローバル変数
double g_angle1 = 0.0;
double g_angle2 = -3.141592 / 6;
double g_distance = 10.0;
bool g_isLeftButtonOn = false;
bool g_isRightButtonOn = false;
GLuint g_TextureHandles[3] = {0,0,0};
cv::VideoCapture cap;
cv::Mat frame;


int main(int argc, char *argv[]){

    cap.open(0);
    if (!cap.isOpened()) {
        printf("cannnot open camera");
        return -1;
    }

    cv::namedWindow("Input", 1);

    /* OpenGLの初期化 */
    init_GL(argc,argv);

    /* このプログラム特有の初期化 */
    init();

    /* コールバック関数の登録 */
    set_callback_functions();

    /* メインループ */
    glutMainLoop();

    return 0;
}

void init_GL(int argc, char *argv[]){
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGBA | GLUT_DEPTH | GLUT_DOUBLE);
    glutInitWindowSize(WINDOW_X,WINDOW_Y);
    glutCreateWindow(WINDOW_NAME);
}

void init(){
    glClearColor(0.2, 0.2, 0.2, 0.2);
    glGenTextures(3, g_TextureHandles);

    for(int i = 0; i < 3; i++){
        glBindTexture(GL_TEXTURE_2D, g_TextureHandles[i]);
        glPixelStorei(GL_UNPACK_ALIGNMENT, 1);
        glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, TEXTURE_WIDTH,
                     TEXTURE_HEIGHT, 0, GL_RGB, GL_UNSIGNED_BYTE, NULL);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
    }
    set_texture();
}

void set_callback_functions(){
    glutDisplayFunc(glut_display);
    glutKeyboardFunc(glut_keyboard);
    glutMouseFunc(glut_mouse);
    glutMotionFunc(glut_motion);
    glutPassiveMotionFunc(glut_motion);
    glutIdleFunc(glut_idle);
}

void glut_keyboard(unsigned char key, int x, int y){
    switch(key){
        case 'q':
        case 'Q':
        case '\033':
            exit(0);
    }
    glutPostRedisplay();
}

void glut_mouse(int button, int state, int x, int y){
    if(button == GLUT_LEFT_BUTTON){
        if(state == GLUT_UP){
            g_isLeftButtonOn = false;
        }else if(state == GLUT_DOWN){
            g_isLeftButtonOn = true;
        }
    }

    if(button == GLUT_RIGHT_BUTTON){
        if(state == GLUT_UP){
            g_isRightButtonOn = false;
        }else if(state == GLUT_DOWN){
            g_isRightButtonOn = true;
        }
    }
}

void glut_motion(int x, int y){
    static int px = -1, py = -1;
    if(g_isLeftButtonOn == true){
        if(px >= 0 && py >= 0){
            g_angle1 += (double)-(x - px)/20;
            g_angle2 += (double)(y - py)/20;
        }
        px = x;
        py = y;
    }else if(g_isRightButtonOn == true){
        if(px >= 0 && py >= 0){
            g_distance += (double)(y - py)/20;
        }
        px = x;
        py = y;
    }else{
        px = -1;
        py = -1;
    }
    glutPostRedisplay();
}

void glut_display(){
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(30.0, 1.0, 0.1, 100);

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    if (cos(g_angle2)>0){
        gluLookAt(g_distance * cos(g_angle2) * sin(g_angle1),
                  g_distance * sin(g_angle2),
                  g_distance * cos(g_angle2) * cos(g_angle1),
                  0.0, 0.0, 0.0, 0.0, 1.0, 0.0);}
    else{
        gluLookAt(g_distance * cos(g_angle2) * sin(g_angle1),
                  g_distance * sin(g_angle2),
                  g_distance * cos(g_angle2) * cos(g_angle1),
                  0.0, 0.0, 0.0, 0.0, -1.0, 0.0);}

    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glEnable(GL_DEPTH_TEST);
    draw_pyramid();
    glFlush();
    glDisable(GL_DEPTH_TEST);

    glutSwapBuffers();
}

void glut_idle(){
    set_texture();
    glutPostRedisplay();
}

void setTextureNum(int n) {
    glBindTexture(GL_TEXTURE_2D, g_TextureHandles[n]);
}

void draw_pyramid(){
    GLdouble pointO[] = {0.0, 1.0, 0.0};
    GLdouble pointA2[]= {1.5, 1.0, 0.0};
    GLdouble pointA[] = {1.5, -1.0, 1.5};
    GLdouble pointB2[]= {-1.5, 1.0, 0.0};
    GLdouble pointB[] = {-1.5, -1.0, 1.5};
    GLdouble pointC[] = {-1.5, -1.0, -1.5};
    GLdouble pointD[] = {1.5, -1.0, -1.5};

    glColor3d(1.0, 0.0, 0.0);
    glBegin(GL_TRIANGLES);
    glVertex3dv(pointO);
    glVertex3dv(pointA);
    glVertex3dv(pointB);
    glEnd();

    glColor3d(1.0, 1.0, 0.0);
    glBegin(GL_TRIANGLES);
    glVertex3dv(pointO);
    glVertex3dv(pointB);
    glVertex3dv(pointC);
    glEnd();

    glColor3d(0.0, 1.0, 1.0);
    glBegin(GL_TRIANGLES);
    glVertex3dv(pointO);
    glVertex3dv(pointC);
    glVertex3dv(pointD);
    glEnd();

    glColor3d(1.0, 0.0, 1.0);
    glBegin(GL_TRIANGLES);
    glVertex3dv(pointO);
    glVertex3dv(pointD);
    glVertex3dv(pointA);
    glEnd();

    glColor3d(1.0, 1.0, 1.0);


    glEnable(GL_TEXTURE_2D);

    setTextureNum(0);
    glPushMatrix();
    {
        glBegin(GL_POLYGON);
        glTexCoord2d(1.0, 0.0);
        glVertex3dv(pointA);
        glTexCoord2d(0.0, 0.0);
        glVertex3dv(pointB);
        glTexCoord2d(0.0, 1.0);
        glVertex3dv(pointC);
        glTexCoord2d(1.0, 1.0);
        glVertex3dv(pointD);
        glEnd();
    }
    glPopMatrix();

    glDisable(GL_TEXTURE_2D);
}

void set_texture(){
    // const char *inputFileNames[3] = {"/home/denjo/opencvgl/flower1.jpg", "/home/denjo/opencvgl/lena.jpg", "/home/denjo/opencvgl/templ.png"};
    /*
     for(int i = 0; i < 3; i++){
        cv::Mat input = cv::imread(inputFileNames[i], 1);
        // BGR -> RGBの変換
        cv::cvtColor(input, input, CV_BGR2RGB);

        glBindTexture(GL_TEXTURE_2D, g_TextureHandles[i]);
        glTexSubImage2D(GL_TEXTURE_2D, 0,
                        (TEXTURE_WIDTH - input.cols) / 2,
                        (TEXTURE_HEIGHT - input.rows) / 2,
                        input.cols, input.rows,
                        GL_RGB, GL_UNSIGNED_BYTE, input.data);
    }
     */

    cap >> frame;
    resize(frame, frame, cv::Size(), 500.0/frame.cols ,500.0/frame.rows);
    cv::cvtColor(frame, frame, CV_BGR2RGB);
    glBindTexture(GL_TEXTURE_2D, g_TextureHandles[0]);
    glTexSubImage2D(GL_TEXTURE_2D, 0,
                    (TEXTURE_WIDTH - frame.cols) / 2,
                    (TEXTURE_HEIGHT - frame.rows) / 2,
                    frame.cols, frame.rows,
                    GL_RGB, GL_UNSIGNED_BYTE, frame.data);

}
