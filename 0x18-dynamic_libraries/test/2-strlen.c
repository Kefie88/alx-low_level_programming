#include "main.h"
/**
 * _strlen - returns lenght of a string
 * @s: function parameter
 * Return: returns length of a string s
 */
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i))
		i++;
	return (i);
}
