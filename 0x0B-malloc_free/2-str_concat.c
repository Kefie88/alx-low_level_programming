#include <stdio.h>
#include "main.h"
/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: contents of s1 followed by s2 and null terminated
 * if NULL is passed, treat it as an empty string
 * return NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *Concat_String;
	int i, ic = 0, len = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] || s2[i]; i++)
		len++;
	Concat_string = malloc(sizeof(char) * len);
	if (Concat_String == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
		Concat_String[ic++] = s1[i];
	for (i = 0; s2[i]; i++)
		Concat_string[ic++] = s2[i];
	return (Concat_String);
}
