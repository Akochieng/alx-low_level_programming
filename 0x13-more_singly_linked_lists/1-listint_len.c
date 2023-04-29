#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
  *listint_len - prints the number of elements in a list
  *@h: the head of the list
  *
  *Return: number of elements in the list
  */

size_t listint_len(const listint_t *h)
{
	const listint_t *cur = h;
	size_t num = 0;

	while (cur)
	{
		num++;
		cur = cur->next;
	}
	return (num);
}
