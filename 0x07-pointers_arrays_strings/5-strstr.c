#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: string
 * *needle: substring to be located
 * Return: returns to the beginning of the located substring,
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	while (*haystack)
	{
		char *src = haystack;
		char *sub = needle;
		while (*haystack && *sub && *haystack == *sub)
		{
			haystack++;
			sub++;
		}
		if (!*sub)
			return (scr);
		haystack = src + 1;
	}
	return (0);
}
