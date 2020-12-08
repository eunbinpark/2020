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

    /***�¾�***/
    glPushMatrix();
    glTranslatef(0.0, 0.0, 0.0);
    glLightf(GL_LIGHT0, GL_SPECULAR, 1.0);
    glLightfv(GL_LIGHT0, GL_POSITION, light_pos);
    glDisable(GL_LIGHTING);
    glColor3d(0.9, 0.9, 0.5); // ���
    glutSolidSphere(0.5, 30, 16);
    glEnable(GL_LIGHTING);
    glPopMatrix();
    glEnable(GL_COLOR_MATERIAL);    //��ü�� ������ �� ǥ��
    glMatrixMode(GL_PROJECTION);
    glMatrixMode(GL_MODELVIEW); // ���� matrix�� �����ϴ� ���

    glLoadIdentity(); // ���� ��ǥ�� �ʱ�ȭ
    /***����***/
    glTranslatef(0.0, 0.0, -2.0);
    glPushMatrix(); // ������ ǥ���ϴ� ���� ��ǥ�� �߰�
        //�����ǰ���
        glRotatef((float)Day, 0.0, 1.0, 0.0);
        glTranslatef(1.3, 0.0, 0.0); //�¾����κ��� ������ �Ÿ�
        //����������
        glRotatef((float)Time, 0.0, 1.0, 0.0);
        glColor3d(0.0, 0.4, 1.0); // �Ķ�
        glutSolidSphere(0.1, 30, 8);    //ũ��
        
        /***��***/
        glPushMatrix(); // ���� ǥ���ϴ� ���� ��ǥ�� �߰�
            //���ǰ���
            glRotatef((float)Day, 0.0, 1.0, 0.0);
            glTranslatef(0.2, 0.0, 0.0);
            glColor3d(1.0, 1.0, 0.5); // �����
            glutSolidSphere(0.04, 30, 8);
        glPopMatrix(); // ������ �� ���� ���� ��ǥ�踦 ���� ��
    glPopMatrix(); // ������ �� ������ ���� ��ǥ�踦 ���� ��

    /***����***/
    glPushMatrix(); // ������ ǥ���ϴ� ���� ��ǥ�� �߰�
    //�����ǰ���
    glRotatef((float)MDay, 0.0, 1.0, 0.0);
    glTranslatef(0.7, 0.0, 0.0); //�¾����κ��� ������ �Ÿ�
    //����������
    glRotatef((float)MTime, 0.0, 1.0, 0.0);
    glColor3d(0.53, 0.4, 0.0); // ����
    glutSolidSphere(0.05, 10, 8);    //ũ��
    glPopMatrix(); // ������ �� ������ ���� ��ǥ�踦 ���� ��

    /***�ݼ�***/
    glPushMatrix(); // �ݼ��� ǥ���ϴ� ���� ��ǥ�� �߰�
    //�ݼ��ǰ���
    glRotatef((float)VDay, 0.0, 1.0, 0.0);
    glTranslatef(1.0, 0.0, 0.0); //�¾����κ��� ������ �Ÿ�
    //�ݼ�������
    glRotatef((float)VTime, 0.0, 1.0, 0.0);
    glColor3d(1.0, 0.9, 0.0); // �ݻ�
    glutSolidSphere(0.1, 30, 8);    //ũ��
    glPopMatrix(); // ������ �� �ݼ��� ���� ��ǥ�踦 ���� ��

    /***ȭ��***/
    glPushMatrix(); // ȭ���� ǥ���ϴ� ���� ��ǥ�� �߰�
    //ȭ���ǰ���
    glRotatef((float)ADay, 0.0, 1.0, 0.0);
    glTranslatef(1.7, 0.0, 0.0); //�¾����κ��� ������ �Ÿ�
    //ȭ��������
    glRotatef((float)ATime, 0.0, 1.0, 0.0);
    glColor3d(1.0, 0.5, 0.4); // ������
    glutSolidSphere(0.05, 30, 8);    //ũ��
    glPopMatrix(); // ������ �� ȭ���� ���� ��ǥ�踦 ���� ��

    /***��***/
    glPushMatrix(); // ���� ǥ���ϴ� ���� ��ǥ�� �߰�
    //���ǰ���
    glRotatef((float)JDay, 0.0, 1.0, 0.0);
    glTranslatef(2.1, 0.0, 0.0); //�¾����κ��� ������ �Ÿ�
    //��������
    glRotatef((float)JTime, 0.0, 1.0, 0.0);
    glColor3d(0.8, 0.6, 0.4); //Ȳ���
    glutSolidSphere(0.2, 30, 8);    //ũ��
    glPopMatrix(); // ������ �� ���� ���� ��ǥ�踦 ���� ��

    /***�伺***/
    glPushMatrix(); // �伺�� ǥ���ϴ� ���� ��ǥ�� �߰�
    //�伺�ǰ���
    glRotatef((float)SDay, 0.0, 1.0, 0.0);
    glTranslatef(2.7, 0.0, 0.0); //�¾����κ��� ������ �Ÿ�
    //�伺������
    glRotatef((float)STime, 0.0, 1.0, 0.0);
    glColor3d(0.1, 0.8, 0.4); //����
    glutSolidSphere(0.2, 30, 8);    //ũ��
    glPopMatrix(); // ������ �� �伺�� ���� ��ǥ�踦 ���� ��

    /***õ�ռ�***/
    glPushMatrix(); // õ�ռ��� ǥ���ϴ� ���� ��ǥ�� �߰�
    //õ�ռ��ǰ���
    glRotatef((float)UDay, 0.0, 1.0, 0.0);
    glTranslatef(3.0, 0.0, 0.0); //�¾����κ��� ������ �Ÿ�
    //õ�ռ�������
    glRotatef((float)UTime, 0.0, 1.0, 0.0);
    glColor3d(0.4, 0.8, 0.8); // �Ķ�
    glutSolidSphere(0.15, 30, 8);    //ũ��
    glPopMatrix(); // ������ �� õ�ռ��� ���� ��ǥ�踦 ���� ��

    /***�ؿռ�***/
    glPushMatrix(); // �ؿռ��� ǥ���ϴ� ���� ��ǥ�� �߰�
    //�ؿռ��ǰ���
    glRotatef((float)NDay, 0.0, 1.0, 0.0);
    glTranslatef(3.5, 0.0, 0.0); //�¾����κ��� ������ �Ÿ�
    //�ؿռ�������
    glRotatef((float)NTime, 0.0, 1.0, 0.0);
    glColor3d(0.4, 0.8, 1.0); // �Ķ�
    glutSolidSphere(0.15, 30, 8);    //ũ��
    glPopMatrix(); // ������ �� �ؿռ��� ���� ��ǥ�踦 ���� ��

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
    glutCreateWindow("2018848054 ������");
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    

    // glOrtho�� view volume�� �����ϴ� �Լ�
    // �ΰ��� x, y, z�� ������ ǥ�� ��
    glOrtho(-3.0, 3.0, -3.0, 3.0, -2.0, 3.0);
    glutDisplayFunc(MyDisplay);
    InitLight();
    glutTimerFunc(100, MyTimer, 1);
    glutMainLoop();
    return 0;
}