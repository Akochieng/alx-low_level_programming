#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include "lists.h"
/**
  *free_listint_safe - free lists
  *@h: the head
  *
  *Return: size freed
  */
size_t free_listint_safe(listint_t **h)
{
	listint_t *cur;
	listint_t *nxt;
	size_t size = 0;

	cur = *h;
	while (cur)
	{
		nxt = cur->next;
		free(cur);
		size += sizeof(listint_t);
		cur = nxt;
	}
	*h = NULL;
	return (size);
}
