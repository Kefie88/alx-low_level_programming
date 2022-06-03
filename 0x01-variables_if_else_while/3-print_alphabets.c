#include <stdio.h>

/**
 * main - entry point
 * description - prints lowercase and uppercase alphabets
 * return: always 0
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	for (c = 'A'; c <='Z'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
