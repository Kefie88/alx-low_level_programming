#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: string one
 * @s2: string two
 * Return: Returns the difference
 */
int _strcmp(char *s1, char *s2)
{
	int dif = 0, i = 0;

	while (s1[i])
	{
		if (s1[i] != s2[i])
		{
			diff = ((s1[i] - '\0') - (s2[i] - '\0'));
			break;
		}
		i++;
	}
	return (diff);
}
