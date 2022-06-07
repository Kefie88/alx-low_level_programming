#include <stdio.h>
#include "main.h"
/**
 * print_times_table - prints the table n times starting with 0
 * @n: the times of the table
 */
void print_times_table(int n)
{
	int i, j;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				printf("%d, ", i * j);
			}
			printf("%d\n");
		}
	}
}
