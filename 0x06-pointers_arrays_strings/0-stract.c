#include "main.h"
/**
 * *_strcat - concatenates two strings
 * @dest: first parameter, destination
 * @src: second parameter, source
 * Return: returns concatenated string, dest
 */
char *_strcat(char *dest, char *src)
{
	int len = 0, i;

	while (*dest != '\0')
		len++;
	for (i = 0; *src != '\0'; i++, len++)
		*(dest + len) = src[i];
	return (dest);
}
