#include "variadic_functions.h"
/**
 * print_char - prints a character
 * @arg: pointer to char
 */
void print_char(va_list *arg)
{
	printf("%c", va_arg(*arg, int));
}
/**
 * print_int - prints integer
 * @arg: pointer to int
 */
void print_int(va_list *arg)
{
	printf("%d", va_arg(*arg, int);
}
/**
 * print_float - prints a float data type
 * @arg: pointer to float
 */
void print_float(va_list *arg)
{
	printf("%f", va_arg(*arg, double);
}
/**
 * print_string - prints string
 * @arg: pointer to a string
 */
void print_string(va_list *arg)
{
	char *str;

	str = va_arg(*arg, char *);
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

	print_t func[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};
	va_start(lst, format);
	while (format && (*(format + i)))
	{
		j = 0;
		while (j < 4 && (*(format + i) != *(func[j].symbol)))
			j++
		if (j < 4)
		{
			printf("%s", separator);
			func[j].print(lst);
			separator = ", ";
		}
		i++;
	}
	printf("\n");
	va_end(lst);
}
