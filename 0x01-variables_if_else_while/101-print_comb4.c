#include <stdio.h>
/**
 * main - entry point
 * description - print all possible combinations of 3 digits
 * Return: always 0
 */
int main(void)
{
	int i, j, t;

	for (i = 0; i <= 9; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			for (t = j + 1; t <= 9; t++)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(t + '0');
				if (i < 7)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
