#include "lists.h"
/**
  *add_nodeint - add node to the beginning of a singly linked list
  *@head: the head of the list
  *@n: the value of n
  *
  *Return: the newly created node
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}
