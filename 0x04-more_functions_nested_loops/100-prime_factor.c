#include <stdio.h>
/**
 * main - entry point
 * Description - finds and prints largest prime factor of
 * the number 612852475143
 * Return: returns 0
 */
int main(void)
{
	long i, num = 612852475143;

	for (i = 2; i < num; i++)
	{
		if (num % i == 0)
			num = num / i;
	}
	printf("li\n", num);
	return (0);
}
