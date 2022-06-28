#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees two dimensional grid previously created by your
 * alloc_grid function
 * @grid: grid
 * @height: second parametr
 * Return: nothing (void)
 */
void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}
