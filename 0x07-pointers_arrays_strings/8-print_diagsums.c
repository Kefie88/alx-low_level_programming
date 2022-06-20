#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix of integeres
 * @a: square matrix of integers
 * @size: size of matrix
 * Return: nothing (void)
 */
void print_diagsums(int *a, int size)
{
	int i, c = 0, d = 0;

	for (i = 0; i < size; i++)
	{
		c += a[i];
		d += a[size - i - 1];
		a += size;
	}
	printf("%d, ", c);
	printf("%d\n", d);
}
