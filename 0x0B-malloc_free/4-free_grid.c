#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - A function freeing two dimensional grid
 * @grid: address of two dimesional grid
 * @height: grid height
 * Description: freeing memory of grid
 *
 * Return: 0
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
