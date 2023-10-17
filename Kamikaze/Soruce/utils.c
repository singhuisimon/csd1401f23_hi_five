#include "utils.h"
#include "game.h"

/*!
@brief This function will perform logic check upon mouse click
Special scenarios: Nil
@param word IsAreaClicked
@return - void
*//*______________________________________________________________*/
int IsAreaClicked(float area_center_x, float area_center_y, float area_width, float area_height, float click_x, float click_y)
{
	/* Logic check if mouse point upon click is outside of the rectangle
	* area_center_x = 650
	* area_center_y = 200
	*//*______________________________________________________________*/
	// Checking whether click_x and click_y is within rect1
	if (click_x > area_center_x && click_x < area_center_x + area_width 
		&& click_y > area_center_y && click_y < area_center_y + area_height)
	{
		return 1; // Within Circle
	}
	// Checking whether click_x and click_y is within rect2
	if (click_x > area_center_x && click_x < area_center_x + area_width 
		&& click_y > area_center_y && click_y < area_center_y + area_height)
	{
		return 1;
	}

	return 0;
}

int IsCircleClicked(float circle_center_x, float circle_center_y, float click_x, float click_y, float diameter)
{
	/* Logic check if mouse point upon click is inside of the rectangle
	* Comparing if the distance between the point of the mouse and the point of the circle is more the radius
	* Formula = squared distance between points = sqaured radius (Use Square to reduce the computation by the computer)
	*//*______________________________________________________________*/
	float radiussqaure = (diameter / 2) * (diameter /2);

	float sqaure_x = (click_x - circle_center_x) * (click_x - circle_center_x);

	float sqaure_y = (click_y - circle_center_y) * (click_y - circle_center_y);

	float DistanceBetweenPoints = sqaure_x + sqaure_y;

	if (DistanceBetweenPoints <= radiussqaure)
	{
		return 1; //Within Circle
	}

	return 0;
}

int AreCirclesIntersecting(float c1_x, float c1_y, float c2_x, float c2_y, float c3_x, float c3_y, float r)
{
	float diameter = r * 2;
	float diameter_sqaure = diameter * diameter;

	// Comparison between c1 and c2
	float sqaure_c1_2_x = (c1_x - c2_x) * (c1_x - c2_x);
	float square_c1_2_y = (c1_y - c1_y) * (c1_y - c1_y);

	float distance_between_c1_2 = sqaure_c1_2_x + square_c1_2_y;

	// Comparison between c1 and c3
	float sqaure_c1_3_x = (c1_x - c3_x) * (c1_x - c3_x);
	float square_c1_3_y = (c1_y - c3_y) * (c1_y - c3_y);

	float distance_between_c1_3 = sqaure_c1_3_x + square_c1_3_y;

	// Comparison between c12and c3
	float sqaure_c2_3_x = (c2_x - c3_x) * (c2_x - c3_x);
	float square_c2_3_y = (c2_y - c3_y) * (c2_y - c3_y);

	float distance_between_c2_3 = sqaure_c2_3_x + square_c2_3_y;


	if (distance_between_c1_2 <= diameter_sqaure)
	{
		return 1;
	}
	if (distance_between_c1_3 <= diameter_sqaure)
	{
		return 1;
	}
	if (distance_between_c2_3 <= diameter_sqaure)
	{
		return 1;
	}

	return 0;
}


