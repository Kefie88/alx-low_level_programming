#include "lists.h"
/**
 * free_dlistint - Free list
 * @head: head
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *list;

	while (head)
	{
		list = head;
		head = head->net;
		free(list);
	}
}
