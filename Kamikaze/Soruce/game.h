#pragma once
/*!
@file splashcreen.h
@author Simon Chan (singhuisimon.c)
@course RTIS
@section csd1401f23-a.sg
@tutorial ass01
@date 10/09/2023
@brief This file contains the declaration for the functions Game_Init, Game_Update, Game_Exit.
*//*______________________________________________________________________*/
#include <math.h>
#include "cprocessing.h" // Include cprocessing library
#include "utils.h" // Declaration for utils.h to call the area click for the rectangle

void game_init(void);

void game_update(void);

void game_exit(void);