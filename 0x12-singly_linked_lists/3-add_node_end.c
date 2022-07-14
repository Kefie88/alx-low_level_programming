#include "lists.h"
/**
 * add_node_end - adds new node at the end of a list_t list
 * @head: pointer to the first node in the list
 * @str: string to be added
 * Return: address of the new element
 * NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tmp, *tmp1;
	unsigned int length = 0;

	if (str == NULL)
		return (NULL);
	tmp = malloc(sizeof(list_t));
	if (tmp == NULL)
		return (NULL);
	tmp->str = strdup(str);
	if (tmp->str == NULL)
	{
		free(tmp);
		return (NULL);
	}
	while (str[lenght] != '\0')
		length++;
	tmp->len = length;
	tmp->next = NULL;
	if (*head == NULL)
	{
		*head = tmp;
		return (tmp);
	}
	tmp1 = *head;
	while (tmp1->next)
		tmp1 = tm1->next;
	tmp1->next = tmp;
	return (tmp);
}
