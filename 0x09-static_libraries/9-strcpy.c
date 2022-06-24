#include "main.h"
/**
 * _strcpy - string coppy
 * @dest: first parameter (destination)
 * @src: second parameter (source)
 * Return: returns pointer to destination, dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = *(src + i);
	return (dest);
}
