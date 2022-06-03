#include <stdio.h>

/**
 * main - entry point
 * description - prints lowercase alphabets in reverse
 * Return: always 0
 */
int maint(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
		putchar(c);
	putchar('\n');
	return (0);
}
