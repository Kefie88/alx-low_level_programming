#include "main.h"
/**
 * leet - function that encodes a string into 1337
 * @str: String to be encoded
 * Return: encoded string
 */
char *leet(char *str)
{
	int i, j;
	char Code[] = "oOlLeEaAtT";
	char Encode[] = "0011334477";

	for (j = 0; str[j] != '\0'; j++)
	{
		for (i = 0; i < 5; i++)
		{
			if (str[j] == Code[i])
			{
				str[j] = Encode[i];
			}
		}
	}
	return (str);
}
