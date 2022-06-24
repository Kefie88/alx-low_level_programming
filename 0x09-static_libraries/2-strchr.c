#include "main.h"
/**
 * _strchr - locates character in a string
 * @s: given string
 * @c: character to be located
 * Return: returns a pointer to the first occurence of character c
 * in the string s, or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		s++;
		if (*s == c)
		{
			return (s);
		}
	}
	return (0);
}
