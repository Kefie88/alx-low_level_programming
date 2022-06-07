#include "main.h"
/**
 *print_last_digit - prints the last digit of a number
 *@num: the number where its last digit to be computed
 *Return: return the number modulo 10
 */
int print_last_digit(int num)
{
	int n;

	if (num < 0)
		n = (num % 10) * -1;
	else
		n = num % 10;
	_putchar(n + '0');
	return (n);
}
