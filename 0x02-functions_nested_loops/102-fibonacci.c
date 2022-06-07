#include <stdio.h>
/**
 * main - entry point
 * Description - fibonacci
 * Return: return 0
 */
int main(void)
{
	int f1 = 0, f2 = 1, n = 1;
	long int next;

	next = f1 + f2;
	while (n<= 50)
	{
		printf("%d, ", next);
		f1 = f2;
		f2 = next;
		next = f1 + f2;
		n++;
	}
	printf("\n");
	return (0);
}
