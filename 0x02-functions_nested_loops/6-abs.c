#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 * int - the integer to be computed
 */
int _abs(int)
{
	int num;

	if (num < 0)
		num = num * (-1);
	else
		num = num;
	return (num);
}
