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
void print_int(va_list arg)
{
	printf("%d", va_arg(*arg, int));
}
/**
 * print_float - prints a float data type
 * @arg: pointer to float
 */
void print_float(va_list *arg)
{
	printf("%f", va_arg(*arg, double));
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
 * get_func - getscorresponding function of format type
 * @fmt_arr: format type array
 * @identifier: format type
 * Return:pointer to function on success or NULL on failure
 */
void (*get_func(char identifier, struct format_struct *fmt_arr))(va_list *)
{
	int i = 0;

	while (fmt_arr[i].format)
	{
		if (fmt_arr[i].format == identifier)
		{
			return (fmt_arr[i].fmt_print_func);
		}
		i++;
	}
	return (fmt_arr[i].fmt_print_func);
}
/**
 * print_all - prints anything
 * @format: format of input
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	unsigned int j = 0;
	char *separator = "";

	format_struct_ptr fmt_arr[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{'\0', NULL}
	};
	void (*get_func_ptr)(va_list *);
	va_list lst;

	va_start(lst, format);
	while (format && format[j] != '\0')
	{
		get_func_ptr = get_func(format[j], fmt_arr);
		if (get_func_ptr)
		{
			printf("%s", separator);
			get_func_ptr(&lst);
			separator = ", ";
		}
		j++;
	}
	va_end(lst);
	printf("\n");
}
