#include "main.h"
/**
 * print_rev - prints string in a reverse followed by new line
 * @s: string
 * Return: nothing
 */
void print_reve(char *s)
{
	int i = 0;

	while (*(s + i))
		i++;
	i = i - 1;
	while (i >= 0)
	{
		_putchar(*(s + i));
		i--;
	}
	_putchar('\n');
}
