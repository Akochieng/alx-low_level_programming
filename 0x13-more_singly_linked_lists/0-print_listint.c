#include "lists.h"
/**
  *print_listint - computes number of nodes in a singly linked list
  *@h: the head
  *
  *Return: number of nodes in the list
  */
size_t print_listint(const listint_t *h)
{
	const listint_t *temp;
	size_t num = 0;

	if (h == NULL)
		return (num);
	temp = h;
	for (num = 0; temp != NULL; num++)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
	return (num);
}
