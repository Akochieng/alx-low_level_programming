#include "lists.h"
/**
  *get_dnodeint_at_index - returns the node at index index
  *@head: the head of the list
  *@index: the index
  *
  *Return: the node or NULL if it does not exist
  */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *cur;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	cur = head;
	while (!(cur == NULL || i == index))
	{
		cur = cur->next;
		i++;
	}
	return (cur);
}
