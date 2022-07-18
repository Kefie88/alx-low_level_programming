#include "lists.h"
/**
 * free_listint - frees a listint_t list
 * @head: first node address
 * Return: nothing;
 */
void free_listint(listint_t *head)
{
	listint_t *current;
	listint_t *next;

	current = head;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
