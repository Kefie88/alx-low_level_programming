#include "main.h"
/**
 * rot13 - Encodes a string using rot13
 * @str: string to be encoded
 * Return: Encoded string
 */
char *rot13(char *str)
{
	int i, j = 0;

	char rot13[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char ROT13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (str[j])
	{
		for (i = 0; i < 52; i++)
		{
			if (str[j] == rot13[i])
			{
				str[j] = ROT13[i];
				break;
			}
		}
		j++;
	}
	return (str);
}
