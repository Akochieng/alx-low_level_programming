#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
/**
  *insert_nodeint_at_index - inserts a node at the specified index
  *@head: address to the head of the list
  *@idx: the index
  *@n: n value of the new node
  *
  *Return: returns the inserted node
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *cur;
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		*head = new;
		(*head)->next = NULL;
		return (new);
	}
	cur = get_node(*head, (idx - 1));
	if (cur == NULL)
		return (NULL);
	new->next = cur->next;
	cur->next = new;
	return (new);
}

/**
  *get_node - returns the node located at the shared indes
  *@head: the head of the list
  *@index: the index of the node
  *
  *Return: the node at index index
  */
listint_t *get_node(listint_t *head, unsigned int index)
{
	unsigned int n = 0;
	listint_t *cur;

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
