#include "main.h"
/**
 * print_diagonal - draws diagonal line
 * @n: number of rows or \
 * Return: nothing (void)
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (i == j)
					_putchar('_');
				else
					_putchar(' ');

			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
