#include "lists.h"
/**
  *list_len - function to compute the number of nodes in a struct
  *@h: the head of the struct
  *
  *Return: number of nodes in the struct
  */
size_t list_len(const list_t *h)
{
	const list_t *temp;
	size_t num = 0;

	temp = h;
	for (num = 0; temp != NULL; num++)
		temp = temp->next;
	return (num);
}
