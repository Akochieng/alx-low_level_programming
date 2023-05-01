#include "lists.h"
#include <stddef.h>
#include <stdio.h>
/**
  *get_nodeint_at_index - returns the node located at the shared indes
  *@head: the head of the list
  *@index: the index of the node
  *
  *Return: the node at index index
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n = 0;
	listint_t *cur;

	if (head == NULL)
		return (NULL);
	cur = head;
	for (n = 0; cur; n++)
	{
		if (n == index)
			break;
		cur = cur->next;
	}
	if (n != index)
		return (NULL);
	return (cur);
}
