#include <stdio.h>

/**
 * main - entry point
 * description - prints all numbers of base 16 in lower case
 * Return: always 0
 */
int main(void)
{
	char c = 'a';
	int n;

	for (n = 0; n < 16; n++)
	{
		if (n < 10)
		{
			puchar(n + '0');
		}
		else
		{
			putchar(c);
			c++;
		}		
	}
	putchar('\n');
	return (0);
}
