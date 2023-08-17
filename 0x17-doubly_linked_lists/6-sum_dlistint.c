#include "lists.h"
/**
  *sum_dlistint - sums up the numbers in the nodes
  *@head: the head of the list
  *
  *Return: the sum of numbers in the nodes
  */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *cur;

	cur = head;
	while (!(cur == NULL))
	{
		sum += cur->n;
		cur = cur->next;
	}
	return (sum);
}
