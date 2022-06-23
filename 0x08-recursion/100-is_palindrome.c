#include "main.h"
/**
 * is_palindrome - check whether a string is palindrome
 * @s: given string
 * Return: 1 if a string is palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int i, mid, len;

	while (*s != '\0')
	{
		len++;
	}
	mid = len / 2;
	for (i = 0; i < mid; i++)
	{
		if (s[i] != s[len - i])
			return (0);
	}
	return (1);
}
