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
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= i; j++)
			{
				if (j != 1)
					_putchar(' ');
				if (i == j)
				{
					_putchar('\\');
					_putchar('\n');

			
				}
			}
		}
	}
	else
		_putchar('\n');
}
