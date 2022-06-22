#include "main.h"
/**
 * factorial - returns factorial of a given number
 * @n: given number
 * Return: factorial of a given number
 */
int factorical(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1);
}
