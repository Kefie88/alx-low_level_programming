#include "main.h"
/**
 * str_len - length of given string
 * @s: pointer of given string
 * Return: length of given string
 */
int str_len(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + str_len(s + 1));
}
/**
 * check_palindrome - function checks palindrome
 * @s: given string
 * @len: length of string
 * @i: counter
 * Return: 1 if palindrome, 0 otherwise
 */
int check_palindrome(char *s, int len, int i)
{
	if (s[i] == s[len / 2])
	{
		return (1);
	}
	if (s[i] == s[len - i - 1])
	{
		return (check_palindrome(s, len, i + 1));
	}
	return (0);
}
/**
 * is_palindrome - check whether a string is palindrome
 * @s: given string
 * Return: 1 if a string is palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int i, len;

	i = 0;
	len = str_len(s);
	if (!*s)
	{
		return (1);
	}
	return (check_palindrome(s, len, i));
}
