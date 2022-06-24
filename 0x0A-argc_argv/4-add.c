#include<stdio.h>
#include<stdlib.h>
/**
 * isInteger - checks if s is an integer
 * @s: string to be checked
 * Return: 1 if negative and > 9 else 0
 */
int isInteger(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] < '0' || s[i] > '9')
			return (1);
		i++;
	}
	return (0);
}
/**
 * main - adds positive numbers
 * @argc: couter
 * @argv: pointer arguments
 * Return: returns 0
 */
int main(int argc, char *argv[])
{
	int sum = 0;

	while (--argc)
	{
		if (isInteger(argv[argc]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[argc]);
	}
	printf("%i\n", sum);
	return (0);
}
