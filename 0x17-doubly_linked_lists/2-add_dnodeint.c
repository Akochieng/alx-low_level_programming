#include "lists.h"
/**
  *add_dnodeint - adds new node at the beginning of a list
  *@head: the head of the list
  *@n: the variable n
  *
  *Return: the newly created node
  */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	if (!(*head == NULL))
	{
		(*head)->prev = new;
		new->next = *head;
	}
	else
		new->next = NULL;
	*head = new;
	return (new);
}
