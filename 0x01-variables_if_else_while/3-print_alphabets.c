#include <stdio.h>

/**
 * main - entry point
 * description - prints lowercase and uppercase alphabets
 * return: always 0
 */
int main(void)
{
	char c, C;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	putchar('\n');
	for (C = 'A'; C <='Z'; C++)
		putchar(C);
	return (0);
}
