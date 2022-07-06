#include "function_pointers.h"
/**
 * array_iterator - executes a fun given as a parameter 
 * on each element oa an array
 * @size: size of an array
 * @action: function pointer
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;
	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
