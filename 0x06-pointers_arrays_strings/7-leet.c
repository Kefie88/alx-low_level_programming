#include "main.h"
/**
 * leet - function that encodes a string into 1337
 * @str: String to be encoded
 * Return: encoded string
 */
char *leet(char *str)
{
	int i, j;
	char Code[] = "aeotl";
	char Code1[] = "AEOTL";
	char Encode[] = "43071";

	for (j = 0; str[j] != '\0'; j++)
	{
		for (i = 0; i < 5; i++)
		{
			if (str[i] == Code[i] || str[i] == Code1[i])
			{
				str[i] = Encode[i] + '0';
			}
		}
	}
	return (str);
}
