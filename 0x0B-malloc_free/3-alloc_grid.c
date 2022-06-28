#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns pointe to a two dimensional array of integers
 * @width: first dimension
 * @height: second dimension
 * Return: NULL on failure, if width or height is 0 or -ve, return NULL
 */
int **alloc_grid(int width, int height)
{
	int i, j, t, **TwoDArray;

	if (width <= 0 || height <= 0)
		return (NULL);
	TwoDArray = malloc(sizeof(int) * height);
	if (TwoDArray == NULL)
	{
		free(TwoDArray);
		return ('\0');
	}
	for (i = 0; i < height; i++)
	{
		TwoDArray[i] = malloc(sizeof(int) * width);
		if (TwoDArray[i] == NULL)
		{
			for (t = i; t >= 0; t--)
				free(TwoDArray[t]);
			free(TwoDArray);
			return ('\0');
		}
		for (j = 0; j < width; j++)
			TwoDArray[i][j] = 0;
	}
}
