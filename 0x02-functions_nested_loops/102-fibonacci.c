#include <stdio.h>
/**
 * main - entry point
 * Description - fibonacci
 * Return: return 0
 */
int main(void)
{
	int f1 = 0, f2 = 1, next = 0, n = 1;

	next = f1 + f2;
	while (n<= 50)
	{
		printf("%d, ", next);
		f1 = f2;
		f2 = next;
		next = f1 + f2;
		n++;
	}
	return (0);
}
