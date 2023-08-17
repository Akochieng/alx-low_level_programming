#include "lists.h"
/**
  *free_dlistint - frees a doubly linked list
  *@head: the head of the list
  *
  *Return: void
  */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *next, *cur;

	if (head == NULL)
		return;
	cur = head;
	while (!(cur == NULL))
	{
		next = cur->next;
		free(cur);
		cur = next;
	}
}
