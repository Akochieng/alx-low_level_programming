#include "lists.h"
#include <stddef.h>
#include <stdio.h>
/**
  *list_len - get the length of a list
  *@h: the head of the list
  *
  *Return: the length of the list in size_t
  */
size_t list_len(const list_t *h)
{
	size_t len = 0;
	const list_t *cur = h;

	while (cur)
	{
		len++;
		cur = cur->next;
	}
	return (len);
}
