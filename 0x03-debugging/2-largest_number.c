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

	if (a > b)
	{
		if (a > c)
		{
			largestNum = a;
		}
		else
		{
			largestNum = c;
		}
	}
	else if (b > c)
	{
		largestNum = b;
	}
	else
	{
		largestNum = c;
	}
	return (largestNum);
}
