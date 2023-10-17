#include "cprocessing.h"
#include "game.h"
#include "utils.h"

// main() the starting point for the program
// CP_Engine_SetNextGameState() tells CProcessing which functions to use for init, update and exit
// CP_Engine_Run() is the core function that starts the simulation
int main(void)
{
	//CP_Engine_SetNextGameState(game_init, game_update, game_exit);
	CP_Engine_SetNextGameState(game_init, game_update, game_exit);
	CP_System_SetWindowSize(1600, 900);
	CP_Engine_Run();
	return 0;
}