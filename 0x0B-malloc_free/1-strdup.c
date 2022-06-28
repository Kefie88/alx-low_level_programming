#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - returns a ppointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: given string
 * Return: NULL if str = NULL, returns pointer to the duplicated string,
 * returns NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	char *Array;
	int i, len;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		len++;
	Array = malloc(sizeof(char) * (len + 1));
	if (Array == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
	{
		Array[i] = str[i];
	}
	Array[len] = '\0';
	return (Array);
}
