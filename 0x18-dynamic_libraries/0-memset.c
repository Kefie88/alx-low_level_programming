#include "main.h"
/**
 * _memset - fills the first n bytes of the memory with a constant byte
 * @s: string
 * @b: constant character
 * @n: nbytes
 * Return: returns pointer to the memory area of s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
