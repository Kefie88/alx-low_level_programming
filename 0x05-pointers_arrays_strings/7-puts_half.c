#include "main.h"
/**
 * puts_half - prints half of a string, followed by new line
 * @str: string
 * Return: nothing
 */
void puts_half(char *str)
{
	int i = 0, j, n;

	while (*(str + i))
		i++;
	if (i % 2 == 0)
	{
		j = i / 2;
		for (n = j; n <= i; n++)
			_putchar(*(str + n));
	}
	else
	{
		j = (i - 1) / 2;
		for (n = j; n <= i; n++)
			_putchar(*(str + n));
	}
	_putchar('\n');
}
