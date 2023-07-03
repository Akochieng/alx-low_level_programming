#include "lists.h"
/**
  *insert_nodeint_at_index - inserts new node at position index
  *@head: pointer to head
  *@idx: the index
  *@n: the value of n for the new node
  *
  *Return: the newly created node
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count;
	listint_t *next, *prev, *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	prev = *head;
	if (idx == 0)
	{
		*head = new;
		new->next = prev;
		return (new);
	}
	for (count = 1; count < idx; count++)
	{
		prev = prev->next;
		if (prev == NULL)
		{
			free(new);
			return (NULL);
		}
	}
	next = prev->next;
	prev->next = new;
	new->next = next;
	return (new);
}
