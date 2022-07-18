#include "lists.h"
/**
 * add_nodeint - adds a  new node at the begginning of a listint_t list
 * @head: first node address
 * @n: integer to insert into the new node
 * Return: address of the new element or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *tmp;

	tmp = malloc(sizeof(listint_t));
	if (tmp == NULL)
		return (NULL);
	tmp->n = n;
	tmp->next = *head;
	*head = tmp;
	return (*head);
}
