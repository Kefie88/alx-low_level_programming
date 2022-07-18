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

	tmp = malloc(sizeof(listint_t));
	if (tmp == NULL)
		return (NULL);
	tmp->n = n;
	tmp->next == NULL;
	if (*head == NULL)
	{
		*head = tmp;
		return (tmp);
	}
	tmp1 = *head;
	while (tmp1->next)
		tmp1 = tmp1->next;
	tmp->next = tmp;
	return (tmp);
}
