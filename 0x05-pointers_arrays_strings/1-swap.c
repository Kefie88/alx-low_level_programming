#include "main.h"
/**
 * swap_int - swap the values of two integers
 * @a: first parameter
 * @b: second parameter
 * Return: nothing (void)
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
