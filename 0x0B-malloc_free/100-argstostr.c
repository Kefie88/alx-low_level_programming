#include <stdlib.h>
#include "main.h"
/**
 * argstostr - concatenates all the arguments of your program
 * @ac: first argument
 * @av: second argument
 * Return: NULL if ac = 0 or av = NULL
 * returns a pointer to a new string or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int i, j, count = 0, count1 = 0;
	char *New_String;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			count1++;
		count1++;
	}
	New_String = malloc(sizeof(char) * count1 + 1);
	if (New_String == NULL)
	{
		return ('\0');
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			New_String[count++] = av[i][j];
		}
		New_String[count++] = '\n';
	}
	New_String[count1] = '\0';
	return (New_String);
}
