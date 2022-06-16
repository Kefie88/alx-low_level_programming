#include "main.h"
/**
 * leet - function that encodes a string into 1337
 * @str: String to be encoded
 * Return: encoded string
 */
char *leet(char *str)
{
	int i, j = 0;
	char Code[] = {'o', 'l', '?', 'e', 'a', '?', '?', 't'};

	while (str[j])
	{
		for (i = 0; i < 8; i++)
		{
			if (str[j] == Code[i] || str[j] == Code[i] - 32)
				str[j] = i + '0';
		}
		j++;
	}
	return (str);
}
