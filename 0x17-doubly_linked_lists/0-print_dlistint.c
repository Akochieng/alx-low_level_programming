#include "lists.h"
/**
  *print_dlistint -  prints all the elements of a dlistint_t list
  *@h: the head of a list
  *
  *Return: the number of nodes in the linked list
  */
size_t print_dlistint(const dlistint_t *h)
{
	size_t num = 0;
	const dlistint_t *temp;

	if (h == NULL)
		return (num);
	temp = h;
	while (!(temp == NULL))
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		num++;
	}
	return (num);
}
