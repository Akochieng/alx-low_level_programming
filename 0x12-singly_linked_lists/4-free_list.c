#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
/**
  *free_list - frees memory allocated to list_t
  *@head: the head of the list
  *
  *Return: void
  */
void free_list(list_t *head)
{
	list_t *prev;
	list_t *cur;

	cur = head;
	while (cur)
	{
		free(cur->str);
		prev = cur;
		cur = cur->next;
		free(prev);
	}
}
