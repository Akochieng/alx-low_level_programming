#include "lists.h"
/**
  *listint_len - computes number of nodes in a singly linked list
  *@h: the head
  *
  *Return: number of nodes in the list
  */
size_t listint_len(const listint_t *h)
{
	const listint_t *temp;
	size_t num = 0;

	if (h == NULL)
		return (num);
	temp = h;
	for (num = 0; temp != NULL; num++)
		temp = temp->next;
	return (num);
}
