#include <stdio.h>
#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
/**
  *add_nodeint - adds a node at the begining of a list
  *@head: the head of the list
  *@n: the value of n
  *
  *Return: the address of the newly added node
  */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *cur;

	cur = malloc(sizeof(listint_t));
	if (cur == NULL)
		return (NULL);
	cur->n = n;
	cur->next = *head;
	*head = cur;
	return (cur);
}
