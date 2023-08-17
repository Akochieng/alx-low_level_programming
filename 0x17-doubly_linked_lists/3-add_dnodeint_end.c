#include "lists.h"
/**
  *add_dnodeint_end - adds a new node to the end of the list
  *@head: the head of the linked list
  *@n: the value of the n in the new node
  *
  *Return: the newly created node
  */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp, *new;

	new = NULL;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->next = NULL;
	new->n = n;
	if (!(*head == NULL))
	{
		temp = *head;
		while (!(temp->next == NULL))
			temp = temp->next;
		temp->next = new;
		new->prev = temp;
	}
	else
	{
		*head = new;
		new->next = NULL;
	}
	return (new);
}
