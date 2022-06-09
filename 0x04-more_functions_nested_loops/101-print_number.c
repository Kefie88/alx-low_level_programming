#include "main.h"
/**
 * print_number - prints an integer
 * @n: the integer
 * Return: nothing (void)
 */
void print_number(int n)
{
	int len, rem, tmp, i, exp;

	rem = n;
	exp = len = 1;
	if (rem < 0)
	{
		rem = rem * -1;
		_putchar('_');
	}
	tmp = rem;
	while (tmp >= 10)
	{
		len++;
		tmp = tmp / 10;
	}
	for (i = 1; i < len; i++)
		exp = exp * 10;
	while (exp > 1)
	{
		_putchar((rem / exp) % 10 + '0');
		exp = exp / 10;
	}
	_putchar(rem % 10 + '0');
}
