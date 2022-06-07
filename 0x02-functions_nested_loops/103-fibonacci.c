#include <stdio.h>
/**
 * main - entry point
 * Return: returns 0
 */
int main(void)
{
	long int f1 = 1, f2 = 2, sum = f2, next;

	while (f2 < 4000000)
	{
		next = f1 + f2;
		f1 = f2;
		f2 = next;
		if (f2 % 2 == 0)
		{
			sum = sum + f2;
		}
	}
	printf("%ld\n", sum);
	return (0);
}
