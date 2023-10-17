#pragma once
/*!
@file splashcreen.h
@author Simon Chan (singhuisimon.c)
@course RTIS
@section csd1401f23-a.sg
@tutorial ass01
@date 10/09/2023
@brief This file contains the declaration for the functions IsAreaClicked and IsCircleClicked.
*//*______________________________________________________________________*/
#include <math.h>
#include "cprocessing.h" //Include cprocessing library

int IsAreaClicked(float area_center_x, float area_center_y, float area_width, float area_height, float click_x, float click_y);
int IsCircleClicked(float circle_center_x, float circle_center_y, float click_x, float click_y, float diameter);
int AreCirclesIntersecting(float c1_x, float c1_y, float c2_x, float c2_y, float c3_x, float c3_y, float r);