#include <stdio.h>

/**
 * main - causes an infinite loop
 * Return: returns 0
 */

int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");

	i = 0; /* i not incrimented inside while loop*/
	while (i < 10)
	{
		putchar(i);
	}
	printf("Infinite loop avoided! \\o/\n");
}
