#include "function_pointers.h"
/**
 * print_name - function prints a name
 * @name: name
 * @f: pointer to a function
 * Return: nothing (void)
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
