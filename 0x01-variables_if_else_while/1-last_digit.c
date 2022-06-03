#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/**
 * main - entry point
 * Description - identify the random generated number
 * Return: always 0
 */
/* betty style doc for function main goes there */
int main(void)
{
	int n, lastNo;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	lastNo = n%10;
	if (lastNo>5)
		printf("Last digit of %d is %d and is greater that 5\n",n,lastNo);
	else if (lastNo==0)
		printf("Last digit of %d is %d and is 0\n", n,lastNo);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n,lastNo);
	return (0);
}
