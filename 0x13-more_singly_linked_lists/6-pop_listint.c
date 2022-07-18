#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list
 * and returns the head node's data (n)
 * @head: first node address
 * Return: return 0 if the linked list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int my_data;

	if (*head == NULL)
		return (0);
	tmp = *head;
	*head = tmp->next;
	my_data = tmp->n;
	free(tmp);
	return (my_data);
}
