#include "main.h"
/**
 * rev_string - function reverse a string
 * @s: string
 * Return: nothing
 */
void rev_string(char *s)
{
	int i = 0, j = 0;
	char str[400];

	while (*(s + i))
	{
		*(str + i) = *(s + i);
		i++;
	}
	i = i - 1;
	while (i >= 0)
	{
		*(s + i) = *(str + j);
		j++;
		i--;
	}
}
