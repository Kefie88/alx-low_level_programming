#include "main.h"
/**
 * array_range - creates an array of int
 * @min: minimum
 * @max: maximum
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int size, i = 0;
	int *ptr;

	if (min > max)
	{
		return (NULL);
	}
	size = (max - min) + 1;
	ptr = malloc(sizeof(int) * size);
	if (!ptr)
	{
		free(ptr);
		return (NULL);
	}
	for (i = 0; min <= max; min++, i++)
	{
		ptr[i] = min;
	}
	return (ptr);
}
