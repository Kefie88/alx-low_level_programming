#include <stdio.h>

/**
 * main - entry point
 * description - prints all single digit numbers of base 10
 * Return: always 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		printf("%d", i);
	putchar('\n');
	return (0);
}
