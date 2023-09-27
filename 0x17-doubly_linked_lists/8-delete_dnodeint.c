#include "lists.h"
/**
  *delete_dnodeint_at_index - deletes the node at the specified index
  *@head: the head of the node
  *@index: the index of the node
  *
  *Return: 1 on success otherwise -1
  */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *cur;

	cur = NULL;
	cur = *head;
	if (*head == NULL)
		return (-1);
	i = 0;
	while (!(cur == NULL || i == index))
	{
		cur = cur->next;
		i++;
	}
	if (cur == NULL && i < index)
		return (-1);
	else if (cur == NULL && i == index)
		return (1);
	if (cur && cur->prev)
		cur->prev->next = cur->next;
	else
		*head = cur->next;
	if (cur->next != NULL)
		cur->next->prev = cur->prev;
	free(cur);
	return (1);
}
