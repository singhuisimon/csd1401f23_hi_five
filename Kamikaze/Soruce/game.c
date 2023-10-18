#include "game.h"

// Use the CP_Color_Create function to create a variable
CP_Color grey, red, blue, green, white;

// Create a position vector to store the point of Circle1
CP_Vector point_of_circle1;
float diameter_of_circle1;

// Create a position vector to store Mouse XY
CP_Vector position_of_mouse;

void game_init(void)
{
	// Use the CP_Color_Create function to create a variable
	grey = CP_Color_Create(83, 83, 83, 255);
	red = CP_Color_Create(255, 0, 0, 255);
	green = CP_Color_Create(0, 255, 0, 255);
	blue = CP_Color_Create(0, 0, 255, 255);
	white = CP_Color_Create(255, 255, 255, 255);

	point_of_circle1.x = 100.0f;
	point_of_circle1.y = 100.0f;
	diameter_of_circle1 = 50.0f;
}

void game_update(void)
{
	CP_Graphics_ClearBackground(grey);

	//draw a circle at (100, 100)
	CP_Graphics_DrawCircle(point_of_circle1.x, point_of_circle1.y, diameter_of_circle1);

	// Code to terminate upon key q
	if (CP_Input_KeyDown(KEY_Q))
	{
		CP_Engine_Terminate();
	}
}

void game_exit(void)
{

}