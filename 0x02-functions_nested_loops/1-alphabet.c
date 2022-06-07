#include "main.h"
/**
 * print_alphabet - print alphabet a - z in lowercase
 * Description - function prints alphabet in lowercase
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
