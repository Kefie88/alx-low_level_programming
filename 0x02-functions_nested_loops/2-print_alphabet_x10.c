#include "main.h"
/**
 * print_alphabet_x10 - print alphabet 10 times in lowercase
 */
void print_alphabet_x10(void)
{
	int i = 10;

	while (i < 10)
	{
		char ch;
	
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
	}
	_putchar('\n');
	
}
