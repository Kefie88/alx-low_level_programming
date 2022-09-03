#include "lists.h"
/*8
 * get_dnodeint_at_index - Get nth node
 * @head: Pointer to the head node
 * @index: integer
 * Return: dlistint_t
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);
	while (head != NULL)
	{
		if (index == count)
		{
			return (head);
		}
		count++;
		head = head->next;
	}
	return (NULL);
}
