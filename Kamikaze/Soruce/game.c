#include "game.h"

// Use the CP_Color_Create function to create a variable
CP_Color grey, red, blue, green, white;

// Create a position vector to store the point of Circle1
CP_Vector PointOfCircle1;

// Create a position vector to store Mouse XY
CP_Vector PositionOfMouse;

void game_init(void)
{
	// Use the CP_Color_Create function to create a variable
	grey = CP_Color_Create(83, 83, 83, 255);
	red = CP_Color_Create(255, 0, 0, 255);
	green = CP_Color_Create(0, 255, 0, 255);
	blue = CP_Color_Create(0, 0, 255, 255);
	white = CP_Color_Create(255, 255, 255, 255);

	PointOfCircle1.x = 100.0f;
	PointOfCircle1.y = 100.0f;
}

void game_update(void)
{
	CP_Graphics_ClearBackground(grey);



	// Code to terminate upon key q
	if (CP_Input_KeyDown(KEY_Q))
	{
		CP_Engine_Terminate();
	}
}

void game_exit(void)
{

}