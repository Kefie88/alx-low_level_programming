#include "3-calc.h"
/**
 * main - calculates the result of two integers based on the operand
 * @argc: argument counter
 * @argv: argument vector
 * Return: int
 */
int main(int argc, char *argv[])
{
	register int num1, num2;
	int (*funptr)(int, int);

	if (argc != 4)
	{
		printf("Erro\n");
		exit(98);
	}
	funptr = get_op_func(argv[2]);
	if (!funptr)
	{
		print("Error\n");
		exit(99);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	printf("%d\n", funptr(num1, num2));
	return (0);
}
