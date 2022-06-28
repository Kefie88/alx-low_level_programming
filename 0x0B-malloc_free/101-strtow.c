#include <stdlib.h>
#include "main.h"
/**
 * strow - splits a string into words
 * @str: given string
 * Return: NULL if str = NULL of str = ""
 * returns NULL if function fails
 * Returns pointer to an array of strings (words)
 */
char **strow(char *str)
{
	int i, j, len = 0, t = 0;
	char *Words;

	if (str == NULL || *str == '\0')
		return (NULL);
	while (str[len])
		len++;
	for (i = 0; str[i]; i++)
	{
		for (j = t; j < len; j++)
		{
			Words[i][j] = str[j];
			if (str[j] == " ")
				continue;
			t++;

		}
	}
	Words[t] = '\0';
	return (Words);
}
