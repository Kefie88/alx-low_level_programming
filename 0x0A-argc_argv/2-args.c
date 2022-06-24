#include<stdio.h>
/**
 * main - prints all arguments it receives
 * all arguments should be printed, including the first one
 * only print one argument per line, ending with new line
 * @argc: counter
 * @argv: argument pointer
 * Return: returns 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
