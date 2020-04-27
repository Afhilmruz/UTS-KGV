// UTS KGV.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <Windows.h>
#include <glut.h>
#include <math.h>


using namespace std;

//Objek Bergerak

float xr = 0, yr = 0; //untuk mengatur objek bergerak
const double phi = 3.14;

void lingkaran(int r, int n, int xt, int yt) {
    glBegin(GL_POLYGON);
    for (int i = 0; i <= 306; i++) {
        float sudut = i * (2 * phi / n);
        float x = xt + r * cos(sudut);
        float y = yt + r * sin(sudut);
        glVertex2f(x, y);
    }
    glEnd;
}

void unit(void)
{
    glPointSize(4.0); // ukuran titik 4 x 4 pixel
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glLineWidth(4.0f);
    gluOrtho2D(0.0, 500.0, 0.0, 300.0);

}


void fungsicallback(void)
{
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(0.1f, 0.6f, 0.9f);
    glBegin(GL_POLYGON);
    glVertex2i(0, 150); //langit
    glVertex2i(0, 500);
    glColor3ub(255, 255, 255);
    glVertex2i(1000, 500);
    glVertex2i(1000, 150);
    glEnd();

    glColor3f(0.1f, 0.7f, 0.2f);
    glBegin(GL_POLYGON);
    glVertex2i(0, 0); //halaman
    glVertex2i(0, 150);
    glVertex2i(1000, 150);
    glVertex2i(1000, 0);
    glEnd();

    glColor3f(0.3f, 0.2f, 1.0f);
    glBegin(GL_POLYGON);
    glVertex2i(200, 120); //tembok
    glVertex2i(200, 200);
    glVertex2i(300, 200);
    glVertex2i(300, 120);
    glEnd();


    glColor3f(1.0f, 0.6f, 0.0f);
    glBegin(GL_POLYGON);
    glVertex2i(200, 240); //atap
    glVertex2i(300, 240);
    glColor3ub(255, 255, 255);
    glVertex2i(320, 200);
    glVertex2i(180, 200);
    glEnd();


    glColor3f(0.9f, 0.2f, 0.8f);
    glBegin(GL_POLYGON);
    glVertex2i(210, 120);
    glVertex2i(210, 175); //pintu
    glVertex2i(245, 175);
    glVertex2i(245, 120);
    glEnd();

    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_POINTS); //gagang pintu
    glVertex2i(240, 145);
    glEnd();

    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_LINE_LOOP);
    glVertex2i(200, 120); // Garis tembok
    glVertex2i(200, 200);
    glVertex2i(300, 200);
    glVertex2i(300, 120);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glVertex2i(210, 120); // garis pintu
    glVertex2i(210, 175);
    glVertex2i(245, 175);
    glVertex2i(245, 120);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glVertex2i(200, 240); // garis atap
    glVertex2i(300, 240);
    glVertex2i(320, 200);
    glVertex2i(180, 200);
    glEnd();


    glColor3f(1.0f, 1.0f, 1.0f);
    glBegin(GL_POLYGON);
    glVertex2i(255, 155);
    glVertex2i(255, 175); //jendela1
    glVertex2i(275, 175);
    glVertex2i(275, 155);
    glEnd();

    glColor3f(1.0f, 1.0f, 1.0f);
    glBegin(GL_POLYGON);
    glVertex2i(275, 155);
    glVertex2i(275, 175); //jendela2
    glVertex2i(295, 175);
    glVertex2i(295, 155);
    glEnd();

    glColor3f(1.0f, 1.0f, 1.0f);
    glBegin(GL_POLYGON);
    glVertex2i(255, 135);
    glVertex2i(255, 155); //jendela3
    glVertex2i(275, 155);
    glVertex2i(275, 135);
    glEnd();

    glColor3f(1.0f, 1.0f, 1.0f);
    glBegin(GL_POLYGON);
    glVertex2i(275, 135);
    glVertex2i(275, 155); //jendela4
    glVertex2i(295, 155);
    glVertex2i(295, 135);
    glEnd();

    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_LINE_LOOP);
    glVertex2i(255, 155);
    glVertex2i(255, 175); // garis jendela1
    glVertex2i(275, 175);
    glVertex2i(275, 155);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glVertex2i(275, 155);
    glVertex2i(275, 175); //garis jendela2
    glVertex2i(295, 175);
    glVertex2i(295, 155);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glVertex2i(255, 135);
    glVertex2i(255, 155); //garis jendela3
    glVertex2i(275, 155);
    glVertex2i(275, 135);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glVertex2i(275, 135);
    glVertex2i(275, 155); //garis jendela4
    glVertex2i(295, 155);
    glVertex2i(295, 135);
    glEnd();

    glColor3f(0.3f, 0.3f, 0.3f);
    glBegin(GL_POLYGON);
    glVertex2i(210, 120);
    glVertex2i(250, 120); //jalan1
    glVertex2i(260, 30);
    glVertex2i(190, 30);
    glEnd();

    glColor3f(0.3f, 0.3f, 0.3f);
    glBegin(GL_POLYGON);
    glVertex2i(0, 0);
    glVertex2i(0, 30); //jalan2
    glVertex2i(500, 30);
    glVertex2i(500, 0);
    glEnd();

    glColor3f(0.8f, 0.3f, .2f);
    glBegin(GL_POLYGON);
    glVertex2i(60, 80);
    glVertex2i(50, 100); //vas bunga
    glVertex2i(90, 100);
    glVertex2i(80, 80);
    glEnd();

    glColor3f(0.5f, 1.0f, 0.3f);
    glBegin(GL_POLYGON);
    glVertex2i(69, 100);
    glVertex2i(69, 140); //bunga1
    glVertex2i(71, 140);
    glVertex2i(71, 100);
    glEnd();

    glColor3f(0.5f, 1.0f, 0.3f);
    glBegin(GL_POLYGON);
    glVertex2i(69, 100);
    glVertex2i(80, 140); //bunga2
    glVertex2i(81, 140);
    glVertex2i(73, 100);
    glEnd();

    glColor3f(0.5f, 1.0f, 0.3f);
    glBegin(GL_POLYGON);
    glVertex2i(71, 100);
    glVertex2i(50, 140); //bunga3
    glVertex2i(51, 140);
    glVertex2i(67, 100);
    glEnd();

    glColor3f(0.8f, 1.0f, 0.7f);
    glBegin(GL_POLYGON);
    glVertex2i(65, 130);
    glVertex2i(65, 140); //bunga4
    glVertex2i(75, 140);
    glVertex2i(75, 130);
    glEnd();

    glColor3f(0.9f, 0.2f, 0.2f);
    glBegin(GL_POLYGON);
    glVertex2i(300, 30);
    glVertex2i(300, 80); //pagar1
    glVertex2i(320, 80);
    glVertex2i(320, 30);
    glEnd();

    glColor3f(0.9f, 0.2f, 0.2f);
    glBegin(GL_POLYGON);
    glVertex2i(370, 30);
    glVertex2i(370, 80); //pagar2
    glVertex2i(390, 80);
    glVertex2i(390, 30);
    glEnd();

    glColor3f(0.9f, 0.2f, 0.2f);
    glBegin(GL_POLYGON);
    glVertex2i(440, 30);
    glVertex2i(440, 80); //pagar3
    glVertex2i(460, 80);
    glVertex2i(460, 30);
    glEnd();

    glColor3f(0.9f, 0.2f, 0.2f);
    glBegin(GL_POLYGON);
    glVertex2i(300, 55);
    glVertex2i(300, 60); //pagar4
    glVertex2i(460, 60);
    glVertex2i(460, 55);
    glEnd();

    glColor3f(0.9f, 0.2f, 0.2f);
    glBegin(GL_POLYGON);
    glVertex2i(300, 65);
    glVertex2i(300, 70); //pagar5
    glVertex2i(460, 70);
    glVertex2i(460, 65);
    glEnd();

    glColor3f(0.9f, 0.2f, 0.2f);
    glBegin(GL_POLYGON);
    glVertex2i(300, 50);
    glVertex2i(300, 45); //pagar6
    glVertex2i(460, 45);
    glVertex2i(460, 50);
    glEnd();

    glLineWidth(0.5);
    glBegin(GL_LINE_STRIP);
    glColor3ub(139, 139, 131);         glVertex2f(-0.1, 2.3);
    glColor3ub(139, 139, 131);         glVertex2f(0.0, 2.4);
    glColor3ub(255, 255, 240);         glVertex2f(0.1, 2.3);
    glColor3ub(255, 255, 240);         glVertex2f(0.0, 2.3);
    glColor3ub(139, 139, 131);         glVertex2f(0.1, 2.4);
    glColor3ub(139, 139, 131);         glVertex2f(0.2, 2.3);
    glEnd();

    glColor3f(1.0f, 1.0f, 0.0f);
    lingkaran(20, 50, 460, 270);
    glEnd();


    glColor3ub(204, 214, 19);
    glBegin(GL_POLYGON);
    glVertex2i(10 + xr, 20 + yr);
    glVertex2i(150 + xr, 20 + yr); //mobil1
    glVertex2i(150 + xr, 60 + yr);
    glVertex2i(10 + xr, 60 + yr);
    glEnd();

    glColor3ub(204, 214, 19);
    glBegin(GL_POLYGON);
    glVertex2i(40 + xr, 60 + yr);
    glVertex2i(60 + xr, 90 + yr); //mobil2
    glVertex2i(100 + xr, 90 + yr);
    glVertex2i(120 + xr, 60 + yr);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2i(45 + xr, 60 + yr);
    glVertex2i(60 + xr, 85 + yr); //mobil3
    glVertex2i(75 + xr, 85 + yr);
    glColor3ub(255, 255, 255);
    glVertex2i(75 + xr, 60 + yr);
    glEnd();

    glColor3ub(0, 0, 0);
    lingkaran(15, 50, 40 + xr, 20 + yr); //ban mobil 1
    glEnd();

    glColor3ub(255, 255, 255);
    lingkaran(10, 50, 40 + xr, 20 + yr); //ban mobil 1
    glEnd();

    glColor3ub(0, 0, 0);
    lingkaran(15, 50, 120 + xr, 20 + yr); //ban mobil 2
    glEnd();

    glColor3ub(255, 255, 255);
    lingkaran(10, 50, 120 + xr, 20 + yr); //ban mobil 2
    glEnd();

    glFlush();
    glutPostRedisplay();
    glutSwapBuffers();
}



//Mengatur fungsi  
void specialkey(int key, int x, int y) {
    switch (key) {
    case GLUT_KEY_UP:   // ketikan panah atas ditekan
        yr = yr + 3;
        cout << y << endl;
        glutPostRedisplay();
        break;
    case GLUT_KEY_DOWN: // ketika panah bawah ditekan
        yr--;
        cout << y << endl;
        glutPostRedisplay();
        break;
    case GLUT_KEY_LEFT: // ketika panah kiri ditekan
        xr--;
        cout << x << endl;
        glutPostRedisplay();
        break;
    case GLUT_KEY_RIGHT:    // ketika panah kanan ditekan
        xr++;
        cout << x << endl;
        glutPostRedisplay();
        break;
    }
}

INT main(int argc, char** argv)
{
    printf("Use array key");
    glutInit(&argc, argv); // inisialisasi toolkit
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB); // display
    glutInitWindowSize(1000, 600); // ukuran window
    glutInitWindowPosition(100, 150); // posisi window di layar
    glutCreateWindow("Mobil"); // buka screen window
    glutDisplayFunc(fungsicallback); // registrasi fungsi menggambar
    unit();
    glutSpecialFunc(specialkey);
    glutMainLoop(); // berulang terus-menerus
}