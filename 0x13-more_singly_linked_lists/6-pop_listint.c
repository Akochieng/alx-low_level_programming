#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
/**
  *pop_listint - deletes the head node of a linked list
  *@head: the address of the head
  *
  *Return: returns the value of the deleted node
  */
int pop_listint(listint_t **head)
{
	listint_t *cur = *head;
	int a;

	if (!cur)
		return (0);
	a = cur->n;
	*head = cur->next;
	free(cur);
	return (a);
}
