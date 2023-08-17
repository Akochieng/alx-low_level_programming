#include "lists.h"
/**
  *insert_dnodeint_at_index - inserts a node into a list at a specified index
  *@h: the head of the list
  *@idx: the index to insert the list
  *@n: the value of n in the new node
  *
  *Return: the new node
  */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *new, *cur;

	cur = *h;
	new = NULL;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	while (!(i == idx || cur == NULL))
	{
		cur = cur->next;
		i++;
	}
	if (cur == NULL && i + 1 < idx)
	{
		free(new);
		return (NULL);
	}
	cur->prev->next = new;
	new->prev = cur->prev;
	cur->prev = new;
	new->next = cur;
	return (new);
}
