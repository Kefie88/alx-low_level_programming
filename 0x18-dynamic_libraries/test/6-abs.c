#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 * @num:  the integer to be computed
 * Return: return absolute value
 */
int _abs(int num)
{
	if (num < 0)
		num = num * (-1);
	else
		num = num;
	return (num);
}
