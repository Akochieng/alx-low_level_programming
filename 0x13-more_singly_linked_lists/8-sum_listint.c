#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
/**
  *sum_listint - sums up the n value of nodes in the list
  *@head: the current head of the list
  *
  *Return: 0 if list is empty or sum of values of n in the list
  */
int sum_listint(listint_t *head)
{
	if (head == NULL)
		return (0);
	return ((head->n) + sum_listint(head->next));
}
