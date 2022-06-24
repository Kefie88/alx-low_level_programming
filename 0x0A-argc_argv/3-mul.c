#include<stdio.h>
#include<stdlib.h>
/**
 * main - multiplies two numbers
 * @argc: counter
 * @argv: pointer
 * Return: returns 1 if program does not receive two arguments,
 * 0 otherwise
 */
int main(int argc, char *argv[])
{
	int i, multip = 1;

	(void)argc;
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 0; i < argc;  i++)
	{
		multip *= atoi(argv[i]);
	}
	printf("%d\n", multip);
	return (0);
}
