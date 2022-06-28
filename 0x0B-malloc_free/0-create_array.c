#include "main.h"
/**
 * create_array - creates an array of chars, and
 * initializes it with a specific char
 * @size: size of char
 * @c: char
 * Return: NULL if size is 0, returns pointer to the array or
 * NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *Array;
	unsigned int i;

	if (size == 0)
		return ('\0');
	Array = malloc(size);
	if (Array == NULL)
		return ('\0');
	for (i = 0; i < size; i++)
		Array[i] = c;
	Array[size] = '\0';
	return (Array);
}
