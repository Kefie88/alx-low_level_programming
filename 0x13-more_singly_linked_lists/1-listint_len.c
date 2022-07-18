#include "lists.h"
/**
 * listint_len - returns number of elements in a linked listint_t list
 * @h: pointer to a list
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t num_element = 0;
	const listint_t *current = h;

	while (current != NULL)
	{
		current = current->next;
		num_element++;
	}
	return (num_element);
}
