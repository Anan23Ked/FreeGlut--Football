#include <GL/gl.h>
#include <GL/glut.h>
#include<math.h>
#include<string.h>
#include<iostream>

using namespace std;

float cnt=100.0,sp=-250.0,ps=-100.0,ss=400.0;

void init (void)
{
	glClearColor(0.2,0.6,0.99,0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0,900,0,900);
	glMatrixMode(GL_MODELVIEW);
}

void circle(int x,int y)
{
	float th;
	glBegin(GL_POLYGON);
	for(int i=0;i<360;i++)
	{
	th=i*(3.1416/180);
	glVertex2f(x+20*cos(th),y+20*sin(th));
	}
	glEnd();
}

void cloud1()
{
	glLoadIdentity();
	glColor3f(1.0,1.0,1.0);
	cnt=cnt+0.03;
	if(cnt>950)
	{
	cnt=-250.0;
	}
	glTranslated(cnt,30.0,0.0);
	circle(50, 710);
	glScalef(1.7, 1, 1);
	circle(50, 710);
	circle(20, 710);
}

void cloud3()
{
	glLoadIdentity();
	glColor3f(1.0,1.0,1.0);
	cnt=cnt+0.03;
	if(cnt>950)
	{
	cnt=-250.0;
	}
	glTranslated(cnt,30.0,0.0);
	circle(-200, 710);
	glScalef(1.7, 1, 1);
	circle(-100, 710);
	circle(-50, 710);
}

void cloud2()
{
	glLoadIdentity();
	glColor3f(1.0,1.0,1.0);
	cnt=cnt+0.03;
	if(cnt>950)
	{
	cnt=-250.0;
	}
	glTranslated(cnt,30.0,0.0);
	circle(-100, 710);
	glScalef(1.7, 1, 1);
	circle(-50, 710); 
}

void player1()
{
	glLoadIdentity();
	glColor3f(1.0,0.1,0.03);
	glScaled(0.7,0.7,0.7);
	circle(80,430);
	
	glBegin(GL_POLYGON);
	glVertex2f(60,290);
	glVertex2f(60,410);
	glVertex2f(100,410);
	glVertex2f(100,290);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glVertex2f(70,260);
	glVertex2f(70,290);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glVertex2f(90,260);
	glVertex2f(90,290);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(30,380);
	glVertex2f(30,390);
	glVertex2f(130,390);
	glVertex2f(130,380);
	glEnd();
}

void player12()
{
	glLoadIdentity();
	glColor3f(1.0,0.1,0.03);
	glScaled(0.6,0.6,0.6);
	circle(430,630);
	
	glBegin(GL_POLYGON);
	glVertex2f(410,490); 
	glVertex2f(410,610);
	glVertex2f(450,610);
	glVertex2f(450,490);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glVertex2f(420,460);
	glVertex2f(420,490);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glVertex2f(440,460);
	glVertex2f(440,490);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(380,580);
	glVertex2f(380,590);
	glVertex2f(480,590);
	glVertex2f(480,580);
	glEnd();
}

void player13()
{
	glLoadIdentity();
	glColor3f(1.0,0.1,0.03);
	glScaled(0.6,0.6,0.6);
	circle(200,250);
	
	glBegin(GL_POLYGON);
	glVertex2f(180,110);
	glVertex2f(180,230);
	glVertex2f(220,230);
	glVertex2f(220,110);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glVertex2f(190,80);
	glVertex2f(190,110);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glVertex2f(210,80);
	glVertex2f(210,110);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(150,200);
	glVertex2f(150,210);
	glVertex2f(250,210);
	glVertex2f(250,200);
	glEnd();
}

void player2()
{
	glLoadIdentity();
	glColor3f(0.0,0.0,1.0);
	glScaled(0.7,0.7,0.7);
	circle(960,430);

	glBegin(GL_POLYGON);
	glVertex2f(940,290);
	glVertex2f(940,410);
	glVertex2f(980,410);
	glVertex2f(980,290);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glVertex2f(950,260);
	glVertex2f(950,290);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glVertex2f(970,260);
	glVertex2f(970,290);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(910,380);
	glVertex2f(910,390);
	glVertex2f(1010,390);
	glVertex2f(1010,380);
	glEnd();
}

void player22()
{
	glLoadIdentity();
	glColor3f(0.0,0.0,1.0);
	glScaled(0.6,0.6,0.6);
	circle(960,800);

	glBegin(GL_POLYGON);
	glVertex2f(940,660);
	glVertex2f(940,780);
	glVertex2f(980,780);
	glVertex2f(980,660);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glVertex2f(950,630);
	glVertex2f(950,660);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glVertex2f(970,630);
	glVertex2f(970,660);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(910,770);
	glVertex2f(910,750);
	glVertex2f(1010,750);
	glVertex2f(1010,770);
	glEnd();
}
void fence()
{
	glLoadIdentity();
	glColor3f(1.0, 0.9, 0.0);
	
	glBegin(GL_POLYGON); //Vertical fence 1
	glVertex2f(50, 500);
	glVertex2f(50, 565);
	glVertex2f(55, 565);
	glVertex2f(55, 500);
	glEnd();
	
	glBegin(GL_POLYGON); //Vertical fence 2
	glVertex2f(100, 500);
	glVertex2f(100, 565);
	glVertex2f(105, 565);
	glVertex2f(105, 500);
	glEnd();
	
	glBegin(GL_POLYGON); //Vertical fence 3
	glVertex2f(150, 500);
	glVertex2f(150, 565);
	glVertex2f(155, 565);
	glVertex2f(155, 500);
	glEnd();
	
	glColor3f(0.9,0.4,0.0);
	glBegin(GL_POLYGON); // board
	glVertex2f(35, 565);
	glVertex2f(170, 565);
	glVertex2f(170, 650);
	glVertex2f(35, 650);
	glEnd();
	
	//logo
	glColor3ub(85,26,139);
	glBegin(GL_POLYGON);
	glVertex2i(100,570);
	glVertex2i(130,600);
	glVertex2i(100,630);
	glVertex2i(70,600);
	glEnd();
	
	glColor3ub(85,26,139);
	glBegin(GL_POLYGON);
	glVertex2i(40,570);
	glVertex2i(95,570);
	glVertex2i(60,590);
	glEnd();
	
	glColor3ub(85,26,139);
	glBegin(GL_POLYGON);
	glVertex2i(105,570);
	glVertex2i(160,570);
	glVertex2i(140,590);
	glEnd();
	
	glColor3ub(85,26,139);
	glBegin(GL_POLYGON);
	glVertex2i(50,620);
	glVertex2i(70,600);
	glVertex2i(60,590);
	glVertex2i(40,610);
	glEnd();
	
	glColor3ub(85,26,139);
	glBegin(GL_POLYGON);
	glVertex2i(150,620);
	glVertex2i(130,600);
	glVertex2i(140,590);
	glVertex2i(160,610);
	glEnd();
	
}
void wall()
{
        glLoadIdentity();
        glColor3f(0.9,0.4,0.0);
        glBegin(GL_POLYGON);
        glVertex2f (0,500);
        glVertex2f (900, 500);
        glVertex2f (900, 700);
        glVertex2f (200, 500);
        glEnd();

}

void ball1()
{
	glLoadIdentity();
	glColor3f(1.0, 1.0, 1.0);
	ps=ps+0.1;
	glTranslated(ps,20.0,0.0);
	circle(220,200);
}
void ball2()
{
	glLoadIdentity();
	glColor3f(1.0, 1.0, 1.0);
	ss=ss-0.8;
	glTranslated(ss,20.0,0.0);
	circle(220,200);
}

void field()
{
	glLoadIdentity();
	glColor3f (.02, 0.6, 0.2);
	glBegin(GL_POLYGON);
	glVertex2f(0,0);
	glVertex2f (900, 0);
	glVertex2f (900, 500);
	glVertex2f (0, 500);
	glEnd();
}

void drawCircle(float cx, float cy, float r, int num_segments)
{
	float theta = 3.1415926 * 2 / float(num_segments);
	float tangetial_factor = tanf(theta);
	float radial_factor = cosf(theta);
	float x = r;
	float y = 0;
	glLineWidth(2);
	glBegin(GL_LINE_LOOP);
	for (int ii = 0; ii < num_segments; ii++)
	{
		glVertex2f(x + cx, y + cy); 
		float tx = -y;
		float ty = x;
		x += tx * tangetial_factor;
		y += ty * tangetial_factor;
		x *= radial_factor;
		y *= radial_factor;
	}
	glEnd();
}

void fieldline()
{
	glLoadIdentity();
	glColor3f(1.0,1.0,1.0);
	glBegin(GL_LINES);
	glVertex2f(450, 0);
	glVertex2f(450, 500);
	glEnd();
	
	glBegin(GL_LINES);
	glVertex2f(890, 0);
	glVertex2f(890, 500);
	glEnd();
	
	glBegin(GL_LINES);
	glVertex2f(10, 0);
	glVertex2f(10, 500);
	glEnd();
	
	glBegin(GL_LINE_STRIP); //left box
	glVertex2f(0, 125);
	glVertex2f(55, 125);
	glVertex2f(55, 375);
	glVertex2f(0, 375);
	glEnd();
	
	glBegin(GL_LINE_STRIP); // left inside box
	glVertex2f(0, 187.5);
	glVertex2f(30, 187.5);
	glVertex2f(30, 312.5);
	glVertex2f(0, 312.5);
	glEnd();
	
	glBegin(GL_LINE_STRIP); //right box
	glVertex2f(900, 125);
	glVertex2f(845, 125);
	glVertex2f(845, 375);
	glVertex2f(900, 375);
	glEnd();
	
	glBegin(GL_LINE_STRIP); // right inside box
	glVertex2f(900, 187.5);
	glVertex2f(870, 187.5);
	glVertex2f(870, 312.5);
	glVertex2f(900, 312.5);
	glEnd();
	
	glBegin(GL_POLYGON); //Horizontal fence top 
	glVertex2f(0, 470);
	glVertex2f(0, 480);
	glVertex2f(900, 480);
	glVertex2f(900, 470);
	glEnd();
	
	glBegin(GL_POLYGON); //Horizontal fence bottom 
	glVertex2f(0, 30);
	glVertex2f(0, 40);
	glVertex2f(900, 40);
	glVertex2f(900, 30);
	glEnd();
	
}

void renderbitmap(float p, float q, void *font, char *string)
{
	char *c;
	glRasterPos2f(p,q);
	for(c=string; *c != '\0';c++)
		{
			glutBitmapCharacter(font, *c);
		}
}

void text()
{
	glColor3f(1.0,1.0,1.0);
	char buf[100] = {0};
	sprintf(buf, "ACHARYA FOOTBALL TURF");
	renderbitmap(150, 500, GLUT_BITMAP_TIMES_ROMAN_24, buf);
}

void display(void)
{
	glClear (GL_COLOR_BUFFER_BIT);
	field();
	fieldline();
	drawCircle(450,250, 50, 360);
	fence();
	wall();
	text();
	cloud1();
	cloud2();
	cloud3();
	player1();
	player12();
	player13();
	player2();
	player22();
	if(ps>415)
	{
	ball2();
	}
	else if(ps<415)
	{
	ball1();
	}
	glutSwapBuffers();
	glFlush();
	glutPostRedisplay();
}
int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB |GLUT_DEPTH);
	glutInitWindowSize (900, 600);
	glutInitWindowPosition (100, 100);
	glutCreateWindow ("Acharya Football turf");
	init ();
	glutDisplayFunc(display);
	glutIdleFunc(display);
	glutMainLoop();
	return 0; 
}
