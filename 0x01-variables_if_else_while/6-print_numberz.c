#include <stdio.h>

/**
 * main - entry point
 * description - prints all single digit numbers of base 10
 * Return: always 0
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
		putchar(n);
	putchar('\n');
	return (0);
}
