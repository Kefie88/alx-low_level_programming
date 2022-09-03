#include "lists.h"
/**
 * print_distint - print all the elements of a list
 * @h: pointer to the start of linked list
 * Return: number of nodes
 */
size_t print_distint(const dist_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
