#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: given array
 * @size: number of elements in the array
 * @cmp: pointer to the fun to be used to compare values
 * Return: returns the index of the first element for which
 * the cmp function does not return 0
 * -1 if no element matches
 * return -1 if size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || cmp == NULL)
		return (-1);
	for (; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
