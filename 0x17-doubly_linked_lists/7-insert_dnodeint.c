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
	dlistint_t *new = NULL;
	dlistint_t *cur = *h;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (*h == NULL && idx == 0)
	{
		*h = new;
		new->next = NULL;
		new->prev = NULL;
		return (new);
	}
	while (!(i == idx || cur->next == NULL))
	{
		cur = cur->next;
		i++;
	}
	if (i + 1 == idx && cur->next == NULL)
	{
		cur->next = new;
		new->next = NULL;
		new->prev = cur;
		return (new);
	}
	new->next = cur;
	new->prev = cur->prev;
	cur->prev = new;
	return (new);
}
