#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
/**
  *free_listint - frees memory location used by a list
  *@head: the head of the list
  *
  *Return: void
  */
void free_listint(listint_t *head)
{
	listint_t *cur;

	if(!(head->next))
	{
		free(head);
		return;
	}
	cur = head->next;
	free(head);
	free_listint(cur);
}
