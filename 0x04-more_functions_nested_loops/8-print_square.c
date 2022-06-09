#include "main.h"
/**
 * print_square - prints square followed by a new line
 * @size: size of the square
 * Return: nothing (void)
 */
void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
				_putchar('#');
		}
		_putchar('\n');
	}
}
