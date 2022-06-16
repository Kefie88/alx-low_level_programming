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
	int i = 0, j = 0, len1, len2;

	while (dest[i])
		len1++;
	while (src[j])
		len2++;
	if ( len2 >= n)
	{
		for (i = 0; i < n; i++, len1++)
			*(dest + len1) = *(src + i);
	}
	else
	{
		for (i = 0; i < len2; i++, len1++)
			*(dest + len1) = *(src + i);
	}
	return (dest);
}
