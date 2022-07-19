#include "lists.h"
/**
 * add_nodeint_end - adds new node at the end of a listint_t lst
 * @head: first node address
 * @n: integer to be inserted into the new node
 * Return: address of new element or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tmp, *tmp1;

	tmp = *head;
	while (tmp && tmp->next != NULL)
		tmp = tmp->next;
	tmp1 = malloc(sizeof(listint_t));
	if (tmp1 == NULL)
	{
		free(tmp1);
		return (NULL);
	}
	tmp1->n = n;
	tmp1->next = NULL;
	if (tmp)
		tmp->next = tmp1;
	else
		*head = tmp1;
	return (tmp1);
}
