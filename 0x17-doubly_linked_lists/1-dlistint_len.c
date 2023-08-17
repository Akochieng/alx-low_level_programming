#include "lists.h"
/**
  *dlistint_len -  prints all the elements of a dlistint_t list
  *@h: the head of a list
  *
  *Return: the number of nodes in the linked list
  */
size_t dlistint_len(const dlistint_t *h)
{
	size_t num = 0;
	const dlistint_t *temp;

	if (h == NULL)
		return (num);
	temp = h;
	while (!(temp == NULL))
	{
		temp = temp->next;
		num++;
	}
	return (num);
}
