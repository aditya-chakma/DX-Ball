#include "iGraphics.h"
#include <stdio.h>

int x, y, u, v, w, r, c;

struct brick
{
	int value = 1;
	int brick_x, brick_y;
} box[80][80];

int i = 0, j;
/*
	function iDraw() is called again and again by the system.

	*/

void iDraw()
{
	// place your drawing codes here

	iClear(); // loop dewar karone j er maan prottekbar 1 kore bartese....

	// for 1st row
	for (i = 0; i < u; i = i + 101)
	{
		for (j = 0; j < u; j++)
		{
			if (box[0][j].value)
			{
				iSetColor(255, 0, 0);
				iFilledRectangle(i, v - 40, 100, 40);
				box[0][j].brick_x = i;
				box[0][j].brick_y = v - 40;
			}
		}
	}

	// for  2nd row

	for (i = 0; i < u; i = i + 101)
	{
		for (j = 0; j < u; j++)
		{
			if (box[1][j].value)
			{
				iSetColor(255, 0, 0);
				iFilledRectangle(i, v - 81, 100, 40);
				box[1][j].brick_x = i;
				box[1][j].brick_y = v - 81;
			}
		}
	}

	// for 3rd row
	for (i = 0; i < u; i = i + 101)
	{
		for (j = 0; j < u; j++)
		{
			if (box[2][j].value)
			{
				iSetColor(255, 0, 0);
				iFilledRectangle(i, v - 122, 100, 40);
				box[2][j].brick_x = i;
				box[2][j].brick_y = v - 122;
			}
		}
	}

	// for 4th row

	for (i = 0; i < u; i = i + 101)
	{
		for (j = 0; j < u; j++)
		{
			if (box[3][j].value)
			{
				iSetColor(255, 0, 0);
				iFilledRectangle(i, v - 163, 100, 40);
				box[3][j].brick_x = i;
				box[3][j].brick_y = v - 163;
			}
		}
	}

	// for 5th row

	for (i = 0; i < u; i = i + 101)
	{
		for (j = 0; j < u; j++)
		{
			if (box[4][j].value)
			{
				iSetColor(255, 0, 0);
				iFilledRectangle(i, v - 204, 100, 40);
				box[4][j].brick_x = i;
				box[4][j].brick_y = v - 204;
			}
		}
	}

	iText(10, 10, "Use cursors to move the picture.");
	iSetColor(20, 200, 0);
	iText(40, 40, "Hi, I am iGraphics");
}

/*
	function iMouseMove() is called when the user presses and drags the mouse.
	(mx, my) is the position where the mouse pointer is.
	*/
void iMouseMove(int mx, int my)
{
	printf("x = %d, y= %d\n", mx, my);
	// place your codes here
}

/*
	function iMouse() is called when the user presses/releases the mouse.
	(mx, my) is the position where the mouse pointer is.
	*/
void iMouse(int button, int state, int mx, int my)
{
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		// place your codes here
		//	printf("x = %d, y= %d\n",mx,my);
		x += 10;
		y += 10;
	}
	if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
		// place your codes here
		x -= 10;
		y -= 10;
	}
}

/*
	function iKeyboard() is called whenever the user hits a key in keyboard.
	key- holds the ASCII value of the key pressed.
	*/
void iKeyboard(unsigned char key)
{
	if (key == 'q')
	{
		exit(0);
	}
	// place your codes for other keys here
}

/*
	function iSpecialKeyboard() is called whenver user hits special keys like-
	function keys, home, end, pg up, pg down, arraows etc. you have to use
	appropriate constants to detect them. A list is:
	GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6,
	GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12,
	GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP,
	GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT
	*/
void iSpecialKeyboard(unsigned char key)
{

	if (key == GLUT_KEY_END)
	{
		exit(0);
	}
	// place your codes for other keys here
}

int main()
{
	// place your own initialization codes here.

	printf("enter your screen size:"); // here, user enters the screen size of the game
	scanf("%d%d", &u, &v);

	iInitialize(u, v, "demo");
	return 0;
}
