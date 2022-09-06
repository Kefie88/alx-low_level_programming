#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: destination
 * @src: source
 * @n: number of character
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, len = 0;

	while (src[i] && i < n)
	{
		*(dest + i) = src[i];
		i++;
		len++;
	}
	for (i = len; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
