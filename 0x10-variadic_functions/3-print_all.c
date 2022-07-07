#include "variadic_functions.h"
/**
 * print_char - prints a character
 * @arg: pointer to char
 */
void print_char(va_list arg)
{
	char alp;

	alp = va_arg(arg, int);
	printf("%c", alp);
}
/**
 * print_int - prints integer
 * @arg: pointer to int
 */
void print_int(va_list arg)
{
	int num;

	num = va_arg(arg, int);
	printf("%d", num);
}
/**
 * print_float - prints a float data type
 * @arg: pointer to float
 */
void print_float(va_list arg)
{
	float num;

	num = va_arg(arg, double);
	printf("%f", num);
}
/**
 * print_string - prints string
 * @arg: pointer to a string
 */
void print_string(va_list arg)
{
	char *str;

	str = va_arg(arg, char *);
	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}
/**
 * print_all - prints anything
 * @format: format of input
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	va_list lst;
	int i = 0, j = 0;
	char *separator = "";

	printer_t funcs[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};
	va_start(lst, format);
	while (format && (*(format + i)))
	{
		j = 0;
		while (j < 4 && (*(format + i) != *(funcs[j].symbol)))
			j++;
		if (j < 4)
		{
			printf("%s", separator);
			funcs[j].print(lst);
			separator = ", ";
		}
		i++;
	}
	printf("\n");
	va_end(lst);
}
