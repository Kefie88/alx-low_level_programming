#include <stdio.h>
/**
 * main - entry point
 * Description - fibonacci
 * Return: return 0
 */
int main(void)
{
	int n = 1;
	long int f1 = 0, f2 = 1, next;

	next = f1 + f2;
	while (n <= 50)
	{
		if (n == 50)
		{
			printf("%ld", next);
		}
		else
		{
			printf("%ld, ", next);
			f1 = f2;
			f2 = next;
			next = f1 + f2;
		}
		n++;
	}
	printf("\n");
	return (0);
}
