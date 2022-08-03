#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - prints a grid of integers
 * @grid: the address of the two dimensional grid
 * @height: height of the grid
 *
 * Return: Nothing.
 */

void free_grid(int **grid, int height)
{
	int x;

	for (x = 0 ; x < height ; x++)
	{
		free(grid[x]);
	}

	free(grid);
}
