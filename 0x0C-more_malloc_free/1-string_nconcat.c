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
	unsigned int t, i = 0, j = 0, len, count, count1 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	t = i + j;
	Con = malloc(sizeof(char) * (t + 1));
	if (Con == NULL)
		return (NULL);
	for (len = 0; len < i; len++)
		Con[count1++] = s1[len];
	if (j > n)
		j = n;
	for (count = 0; count < j; count++)
		Con[count1++] = s2[count];
	Con[count1] = '\0';
	return (Con);
}
