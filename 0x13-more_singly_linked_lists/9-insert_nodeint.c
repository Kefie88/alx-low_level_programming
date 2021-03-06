#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: first node address
 * @idx: index of the list where the new node should be added
 * index starts at 0
 * @n: integer to be inserted
 * Return: address of new node or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *tmp;
	unsigned int i = 0;

	if (*head == NULL && idx != 0)
		return (NULL);
	if (idx != 0)
	{
		tmp = *head;
		for (; i < idx - 1 && tmp != NULL; i++)
			tmp = tmp->next;
		if (tmp == NULL)
			return (NULL);
	}
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	new_node->next = tmp->next;
	tmp->next = new_node;
	return (new_node);
}
