#include "main.h"
/**
 * largest_number - computes largest number of three numbers
 * @a: first number
 * @b: second number
 * @c: third number
 * Return: returns largest number
 */
int largest_number(int a, int b, int c)
{
	int largestNum;

	if (a > b && b > c)
	{
		largest = a;
	}
	else if (b > a && b > c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}
	return (largest);
}
