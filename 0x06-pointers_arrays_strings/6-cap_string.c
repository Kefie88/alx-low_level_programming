#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @str: string to be capitalized
 * Return: capitalized string
 */
char *cap_string(char *str)
{
	char sep[] = ",\t;\n .!?\"(){}";
	int f, i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		f = 0;
		if (i == 0)
		{
			f = 1;
		}
		else
		{
			for (j = 0; sep[j] != '\0'; j++)
			{
				if (str[i - 1] == sep[j])
				{
					f = 1;
					break;
				}
			}
		}
		if (f == 1)
		{
			if (str[i] <= 'z' && str[i] >= 'a')
			{
				str[i] -= ('a' - 'A');
			}
		}
	}
	return (str);
}
