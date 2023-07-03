#include "lists.h"
/**
  *add_nodeint_end - adds new node at the end of the list
  *@head: the head of the list
  *@n: value of n
  *
  *Return: the newly created node
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp;
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
		*head = new;
	else
	{
		temp = *head;
		while (!(temp->next == NULL))
			temp = temp->next;
		temp->next = new;
	}
	return (new);
}
