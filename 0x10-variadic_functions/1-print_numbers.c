#include "variadic_functions.h"
/**
 * print_numbers - print numbers followed b a new line
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list lst;

	va_start(lst, n);
	for (i = 0; i < (n - 1) && n != 0; i++)
	{
		if (!separator)
			printf("%d", va_arg(lst, int));
		else
			printf("%d%s", va_arg(lst, int), separator);
	}
	if (n)
		printf("%d\n", va_arg(lst, int));
	else
		printf("\n");
	va_end(lst);
}
