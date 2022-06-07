#include <stdio.h>
/**
 * main - entry point
 * Description - list natural numbers that are multiples of 3 or 5 and sum them
 * Return: returns 0
 */
int main(void)
{
	int i, sum = 0;

	for (i = 1; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
			sum = sum + i;
	}
	return (0);
}
