#include <stdio.h>
#include "main.h"
/**
 * times_table - prints the 9 times table starting with 0
 */
void times_table(void)
{
	int i, j, n = 100;

	n = n / 10;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("%d", i * j);
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
