#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: given integer
 * @index: is the index, starting from 0 of the bit you want to get
 * Return: the value of bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bit;

	if (index > 64)
		return (-1);
	bit = n >> index;
	return (bit & 0x1);
}
