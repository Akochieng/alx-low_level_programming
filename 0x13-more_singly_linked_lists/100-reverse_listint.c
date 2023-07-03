#include "lists.h"
/**
  *reverse_listint - function that reverses a singly linked list
  *@head: pointer to the head
  *
  *Return: the new head
  */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *cur;
	listint_t *nxt;

	cur = (*head)->next;
	(*head)->next = NULL;
	while (!(cur == NULL))
	{
		nxt = cur->next;
		cur->next = *head;
		*head = cur;
		cur = nxt;
	}
	return (*head);
}
