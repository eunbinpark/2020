#include <GL/freeglut.h>

static int Day = 0, Time = 0;

static int MDay = 0, MTime = 0;
static int VDay = 0, VTime = 0;
static int ADay = 0, ATime = 0;
static int JDay = 0, JTime = 0;
static int SDay = 0, STime = 0;
static int UDay = 0, UTime = 0;
static int NDay = 0, NTime = 0;


const GLfloat white[] = { 1.0, 1.0, 1.0, 1.0 };
const GLfloat black[] = { 0.0, 0.0, 0.0, 1.0 };
const GLfloat light_pos[] = { 20.0, 0.0, 0.0, 20.0 };//r, u, f, l
const GLfloat polished[] = { 100.0 };

void MyDisplay() {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glEnable(GL_DEPTH_TEST);
    glMatrixMode(GL_MODELVIEW);

    /***태양***/
    glPushMatrix();
    glTranslatef(0.0, 0.0, 0.0);
    glLightf(GL_LIGHT0, GL_SPECULAR, 1.0);
    glLightfv(GL_LIGHT0, GL_POSITION, light_pos);
    glDisable(GL_LIGHTING);
    glColor3d(0.9, 0.9, 0.5); // 노랑
    glutSolidSphere(0.5, 30, 16);
    glEnable(GL_LIGHTING);
    glPopMatrix();
    glEnable(GL_COLOR_MATERIAL);    //물체의 본래의 색 표현
    glMatrixMode(GL_PROJECTION);
    glMatrixMode(GL_MODELVIEW); // 모델의 matrix를 조작하는 모드

    glLoadIdentity(); // 전역 좌표계 초기화
    /***지구***/
    glTranslatef(0.0, 0.0, -2.0);
    glPushMatrix(); // 지구을 표현하는 지역 좌표계 추가
        //지구의공전
        glRotatef((float)Day, 0.0, 1.0, 0.0);
        glTranslatef(1.3, 0.0, 0.0); //태양으로부터 떨어진 거리
        //지구의자전
        glRotatef((float)Time, 0.0, 1.0, 0.0);
        glColor3d(0.0, 0.4, 1.0); // 파랑
        glutSolidSphere(0.1, 30, 8);    //크기
        
        /***달***/
        glPushMatrix(); // 달을 표현하는 지역 좌표계 추가
            //달의공전
            glRotatef((float)Day, 0.0, 1.0, 0.0);
            glTranslatef(0.2, 0.0, 0.0);
            glColor3d(1.0, 1.0, 0.5); // 노란색
            glutSolidSphere(0.04, 30, 8);
        glPopMatrix(); // 저장해 둔 달의 지역 좌표계를 제거 함
    glPopMatrix(); // 저장해 둔 지구의 지역 좌표계를 제거 함

    /***수성***/
    glPushMatrix(); // 수성을 표현하는 지역 좌표계 추가
    //수성의공전
    glRotatef((float)MDay, 0.0, 1.0, 0.0);
    glTranslatef(0.7, 0.0, 0.0); //태양으로부터 떨어진 거리
    //수성의자전
    glRotatef((float)MTime, 0.0, 1.0, 0.0);
    glColor3d(0.53, 0.4, 0.0); // 갈색
    glutSolidSphere(0.05, 10, 8);    //크기
    glPopMatrix(); // 저장해 둔 수성의 지역 좌표계를 제거 함

    /***금성***/
    glPushMatrix(); // 금성을 표현하는 지역 좌표계 추가
    //금성의공전
    glRotatef((float)VDay, 0.0, 1.0, 0.0);
    glTranslatef(1.0, 0.0, 0.0); //태양으로부터 떨어진 거리
    //금성의자전
    glRotatef((float)VTime, 0.0, 1.0, 0.0);
    glColor3d(1.0, 0.9, 0.0); // 금색
    glutSolidSphere(0.1, 30, 8);    //크기
    glPopMatrix(); // 저장해 둔 금성의 지역 좌표계를 제거 함

    /***화성***/
    glPushMatrix(); // 화성을 표현하는 지역 좌표계 추가
    //화성의공전
    glRotatef((float)ADay, 0.0, 1.0, 0.0);
    glTranslatef(1.7, 0.0, 0.0); //태양으로부터 떨어진 거리
    //화성의자전
    glRotatef((float)ATime, 0.0, 1.0, 0.0);
    glColor3d(1.0, 0.5, 0.4); // 연빨강
    glutSolidSphere(0.05, 30, 8);    //크기
    glPopMatrix(); // 저장해 둔 화성의 지역 좌표계를 제거 함

    /***목성***/
    glPushMatrix(); // 목성을 표현하는 지역 좌표계 추가
    //목성의공전
    glRotatef((float)JDay, 0.0, 1.0, 0.0);
    glTranslatef(2.1, 0.0, 0.0); //태양으로부터 떨어진 거리
    //목성의자전
    glRotatef((float)JTime, 0.0, 1.0, 0.0);
    glColor3d(0.8, 0.6, 0.4); //황토색
    glutSolidSphere(0.2, 30, 8);    //크기
    glPopMatrix(); // 저장해 둔 목성의 지역 좌표계를 제거 함

    /***토성***/
    glPushMatrix(); // 토성을 표현하는 지역 좌표계 추가
    //토성의공전
    glRotatef((float)SDay, 0.0, 1.0, 0.0);
    glTranslatef(2.7, 0.0, 0.0); //태양으로부터 떨어진 거리
    //토성의자전
    glRotatef((float)STime, 0.0, 1.0, 0.0);
    glColor3d(0.1, 0.8, 0.4); //갈색
    glutSolidSphere(0.2, 30, 8);    //크기
    glPopMatrix(); // 저장해 둔 토성의 지역 좌표계를 제거 함

    /***천왕성***/
    glPushMatrix(); // 천왕성을 표현하는 지역 좌표계 추가
    //천왕성의공전
    glRotatef((float)UDay, 0.0, 1.0, 0.0);
    glTranslatef(3.0, 0.0, 0.0); //태양으로부터 떨어진 거리
    //천왕성의자전
    glRotatef((float)UTime, 0.0, 1.0, 0.0);
    glColor3d(0.4, 0.8, 0.8); // 파랑
    glutSolidSphere(0.15, 30, 8);    //크기
    glPopMatrix(); // 저장해 둔 천왕성의 지역 좌표계를 제거 함

    /***해왕성***/
    glPushMatrix(); // 해왕성을 표현하는 지역 좌표계 추가
    //해왕성의공전
    glRotatef((float)NDay, 0.0, 1.0, 0.0);
    glTranslatef(3.5, 0.0, 0.0); //태양으로부터 떨어진 거리
    //해왕성의자전
    glRotatef((float)NTime, 0.0, 1.0, 0.0);
    glColor3d(0.4, 0.8, 1.0); // 파랑
    glutSolidSphere(0.15, 30, 8);    //크기
    glPopMatrix(); // 저장해 둔 해왕성의 지역 좌표계를 제거 함

    glutSwapBuffers();
}

void MyTimer(int value) {
    Day = (Day + 3) % 360;
    Time = (Time + 1) % 360;

    MDay = (MDay + 5) % 360; 
    MTime = (MTime + 1) % 360;

    VDay = (VDay + 3) % 360;
    VTime = (VTime + 1) % 360;

    ADay = (ADay + 1) % 360;
    ATime = (ATime + 1) % 360;

    JDay = (JDay + 20) % 360;
    JTime = (JTime + 25) % 360;

    SDay = (SDay + 30) % 360;
    Time = (Time + 20) % 360;

    UDay = (UDay + 40) % 360;
    Time = (Time + 5) % 360;

    NDay = (NDay + 50) % 360;
    Time = (Time + 5) % 360;

    glutTimerFunc(100, MyTimer, 1);
    glutPostRedisplay();
}

void InitLight() {
    glEnable(GL_LIGHTING);
    glEnable(GL_LIGHT0);
    glLightfv(GL_LIGHT0, GL_DIFFUSE, white);
    glLightfv(GL_LIGHT0, GL_SPECULAR, white);
    glEnable(GL_DEPTH_TEST);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH | GLUT_RGB);
    glutInitWindowSize(1000, 1000);
    glutCreateWindow("2018848054 박은빈");
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    

    // glOrtho는 view volume을 설정하는 함수
    // 두개씩 x, y, z의 범위를 표현 함
    glOrtho(-3.0, 3.0, -3.0, 3.0, -2.0, 3.0);
    glutDisplayFunc(MyDisplay);
    InitLight();
    glutTimerFunc(100, MyTimer, 1);
    glutMainLoop();
    return 0;
}