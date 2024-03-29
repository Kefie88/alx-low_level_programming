#include "lists.h"
/**
 * delete-dnodeint_at_index - Delete nth index node
 * @head: Head of node
 * @index: Index
 * Return: 1 succeed, otherwise -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node;
	unsigned int count;

	if (*head == NULL)
		return (-1);
	node = *head;
	if (index == 0)
	{
		*head = node->next;
		if (node->next != NULL)
			node->next->prev = NULL;
		free (node);
		return (1);
	}
	for (count = 0; node != NULL && count < index - 1; count++)
	{
		node = node->next;
	}
	if (node == NULL || node->next == NULL)
		return (-1);
	if (node->next->next != NULL)
	{
		node->next = node->next->next;
		free(node->next->prev);
		node->next->prev = node;
		return (1);
	}
	else
	{
		free(node->next);
		node->next = NULL;
		return (1);
	}
	return (-1);
}
