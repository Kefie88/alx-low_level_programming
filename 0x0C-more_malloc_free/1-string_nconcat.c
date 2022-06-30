#include "main.h"
/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: first n bytes of s2
 * Return: NULL if function fails, if NULL is passed
 * treat as an empty string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *Con;
	unsigned int i = 0, j = 0, len, count;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	for (len = 0; len <= i; len++)
		Con[len] = s1[len];
	if (n > j)
	{
		for (count = 0; count < j; count++)
			Con[len++] = s2[count];
	}
	else
	{
		for (count = 0; count < n; count++)
			Con[len++] = s2[count];
	}
	Con[len] = '\0';
	return (Con);
}
