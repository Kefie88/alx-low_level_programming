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
		sum = sum + (f2 % 2 == 0) ? f2 : 0;
	}
	printf("%ld\n", sum);
	return (0);
}
