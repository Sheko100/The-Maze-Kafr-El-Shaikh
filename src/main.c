#include "../inc/main.h"

SDL_game game = {NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL};

/**
 * main - entry point to the game
 * @argc: arguments count
 * @argv: array of arguments values
 *
 * Return: 1 on errors
 * 0 otherwise
 */
int main(__attribute__((unused))int argc, __attribute__((unused))char *argv[])
{

	// Initialize the SDL Instance first
	init_sdl();

	// Initialize the game controls
	init_controls();

	// initialize the game world
	init_world();

	// initialize the game entites
	init_entities();

	if (atexit(cleanup) != 0)
		printf("cleanup function hasn't registered successfully\n");

	game_loop();

	return (0);
}
