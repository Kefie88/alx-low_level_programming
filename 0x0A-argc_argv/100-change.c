#include<stdio.h>
#include<stdlib>
/**
 * main - prints the min. number of coins to make
 * change for an amount of money
 * @argc: number of arguments
 * @argv: arrray of pointers in the argument
 * Return: if the number is not exactly 1, print error,
 * followed by a new line and return 1
 * if the number passed as the argument is negative, print 0,
 * followed by a new line
 */
int main(int argc, char *argv[])
{
	int cents, coins, result = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	while (cents > 0)
	{
		if (cents >= 25)
			coins = 25;
		else if (cents >= 10)
			coins = 10;
		else if (cents >= 5)
			coins = 5;
		else if (cents >= 2)
			coins = 2;
		else
		coins = 1;
		result += cents / coins;
		cents %= coins;
	}
	printf("%d\n", result);
	return (0);
}
