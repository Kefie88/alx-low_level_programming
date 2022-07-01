#include "main.h"
/**
 * malloc_checked - allocates memory using malloc
 * @b: size of the memory
 * Return: pointer to the allocated pointer
 * if malloc fails, the function should cause normal processor
 * termination with a status value of 98
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
