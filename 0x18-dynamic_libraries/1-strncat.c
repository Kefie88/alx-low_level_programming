#include "main.h"
/**
 * *_strncat - concatenate two strings
 * @dest: first parameter, destination
 * @src: second parameter, source
 * @n: number of bytes to be concatenated from src
 * Return: returns concatenated string, dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, len = 0;

	while (dest[i++])
		len++;
	for (i = 0; src[i] && i < n; i++)
		*(dest + len++) = *(src + i);
	return (dest);
}
