#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
  *reverse_listint - reverses a linked list
  *@head: pointer to the head of the list
  *
  *Return: pointer to the new head of the list
  */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prv;
	listint_t *nxt;

	if (*head == NULL)
		return (*head);
	prv = NULL;
	while (*head)
	{
		nxt = (*head)->next;
		(*head)->next = prv;
		prv = *head;
		*head = nxt;
	}
	*head = prv;
	return (*head);
}
