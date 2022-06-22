#include "main.h"
/**
 * is_prime_number - identify whether it is prime
 * @n: given number
 * Return: returns 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
	int s = n / 2;

	if (n <= 1)
		return (0);
	return (is_prime(n, s));
}
/**
 * is_prime - return 1 if n is prime
 * @n: given number
 * @s: number to start checking from
 * Return: 1 if prime, 0 otherwise
 */
int is_prime(int n, int s)
{
	if (s <= 1)
		return (1);
	else if (n % s == 0)
		return (0);
	return (is_prime(n, s - 1));
}
