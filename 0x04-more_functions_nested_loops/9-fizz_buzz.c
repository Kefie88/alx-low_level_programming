#include <stdio.h>
/**
 * main - entry point
 * Description - prints Fizz and Buzz for multiples of 3 and 5 respectively and
 * prints FizzBuzz for multiples of both
 * Return: returns 0
 */
int main(void)
{
	int i;

	for (i = 0; i <= 100; i++)
	{
		if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz ");
		else
			printf("%d ", i);
	}
	printf("\n");
	return (0);
}