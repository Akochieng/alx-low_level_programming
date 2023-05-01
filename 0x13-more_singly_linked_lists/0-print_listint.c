#include <stdio.h>
#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
/**
  *print_listint - prints all the elements of a list
  *@h: the head of the list
  *
  *Return: the number of nodes
  */
size_t print_listint(const listint_t *h)
{
	size_t a = 0;
	const listint_t *cur;

	cur = h;
	while (cur)
	{
		printf("%d\n", cur->n);
		cur = cur->next;
		a++;
	}
	return (a);
}
