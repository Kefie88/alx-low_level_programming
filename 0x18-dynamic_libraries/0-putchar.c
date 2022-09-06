#include "main.h"
/**
 * main - entry point
 * Description - prints _putchar
 * Return: returns 0
 */
int main(void)
{
	int i = 0;
	char ch[] = "_putchar";

	while (i < 8)
	{
		_putchar(ch[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
