#include "main.h"
/**
 * leet - function that encodes a string into 1337
 * Return: encoded string
 */
char *leet(char * str)
{
	int i, j;
	char Code[] = {'a', 'e', 'o', 't', 'l'};
	int Encode[] = {4, 3, 0, 7, 1};

	for (j = 0; str[j] != '\0'; j++)
	{
		for (i = 0; i < 5; i++)
		{
			if (*str == Code[i] || *str == Code[i] - 32)
			{
				*str = 48 + Encode[i];
			}
		}
	}
	return (str);
}
