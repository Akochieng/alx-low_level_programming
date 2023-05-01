#include <stdlib.h>
#include <stddef.h>
#include "lists.h"
/**
  *add_nodeint_end - function to add node at the end of a list
  *@n: value of n
  *@head: address of the head
  *
  *Return: address of the new node
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *cur;
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
		*head = new;
	else
	{
		cur = *head;
		while (cur->next)
			cur = cur->next;
		cur->next = new;
	}
	return (new);
}
