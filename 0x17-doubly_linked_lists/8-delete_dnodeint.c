#include "lists.h"

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *cur;

	cur = *head;
	if (*head == NULL)
		return (-1);
	while (!(cur == NULL || i == index))
	{
		cur = cur->next;
		i++;
	}
	if (cur == NULL && i < index)
		return (-1);
	else if (cur == NULL && i == index)
		return (1);
	if (cur->prev != NULL)
		cur->prev->next = cur->next;
	else
		*head = cur->next;
	if (cur->next != NULL)
		cur->next->prev = cur->prev;
	free(cur);
	return (1);
}
