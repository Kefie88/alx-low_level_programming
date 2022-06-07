#include <stdio.h>
/**
 * main -entry point
 * Description - finds and prints first 98 fibonacci numbers
 * Return: returns 0
 */
int main(void)
{
	long int f1 = 1, f2 = 2, next = f1 + f2;
	int i = 1;

	printf("%ld, ", f1);
	printf("%ld, ", f2);
	while (i < 96)
	{
		if (i == 95)
		{
			printf("%ld", next);
		}
		else
		{
			printf("%ld, ", next);
			next = f1 + f2;
			f1 = f2;
			f2 = next;
		}
		i++;
	}
	return (0);
}
