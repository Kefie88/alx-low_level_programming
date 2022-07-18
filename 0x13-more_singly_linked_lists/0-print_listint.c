#include "lists.h"
/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer to a list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *tp;
	unsigned int counter = 0;

	tp = h;
	while (tp)
	{
		printf("%d\n", tp->n);
		counter++;
		tp = tp->next;
	}
	return (counter);
}
