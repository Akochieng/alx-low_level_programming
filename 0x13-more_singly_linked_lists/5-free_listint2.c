#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
/**
  *free_listint2 - frees a list given the address of the head
  *head: address of the pointer to the head
  *
  *Return: void
  */
void free_listint2(listint_t **head)
{
	listint_t *cur;

	if (!((*head)->next))
	{
		free(*head);
		*head = NULL;
		return;
	}
	cur = (*head)->next;
	free(*head);
	*head = cur;
	free_listint2(head);
}
