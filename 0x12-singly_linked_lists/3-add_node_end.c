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
	char *cop;
	int len;

	tmp = malloc(sizeof(list_t));
	if (tmp == NULL)
		return (NULL);
	cop = strdup(str);
	if (str == NULL)
	{
		free(tmp);
		return (NULL);
	}
	for (len = 0; str[len];)
		len++;
	tmp-str = cop;
	tmp->len = len;
	tmp->next = NULL;
	if (*head == NULL)
	{
		*head = tmp;
	}
	else
	{
		tmp1 = *head;
		while (tmp1->next != NULL)
			tmp1 = tm1->next;
		tmp1->next = tmp;
	}
	return (head);
}
