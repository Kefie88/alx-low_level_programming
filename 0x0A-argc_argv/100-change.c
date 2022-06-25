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
	int cents, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	while (cents > 0)
	{
		coins++;
		if ((cents - 25) >= 0)
		{
			cents -= 25;
			continue;
		}
		if ((cents - 10) >= 0)
		{
			cents -= 10;
			continue;
		}
		if ((cents - 5) >= 0)
		{
			cents -= 5;
			continue;
		}
		if ((cents - 2) >= 0)
		{
			cents -= 2;
			continue;
		}
		cents--;
	}
	printf("%d\n", coins);
	return (0);
}
