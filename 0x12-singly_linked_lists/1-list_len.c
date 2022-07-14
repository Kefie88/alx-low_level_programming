#include "list.h"
/**
 * list_len - number of elements in a linked list_t list
 * @h: pointer to a list
 * Return: number of elements in a linked list
 */
size_t list_len(const list_t *h)
{
	const list_t *tmp;
	unsigned int counter = 0;

	tmp = h;
	while (tmp)
	{
		counter++;
		tmp = tmp->next;
	}
	return (counter);
}
