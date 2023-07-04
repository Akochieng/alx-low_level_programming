#include "lists.h"
/**
  *free_listint_safe - function to free a list safely
  *@h: the head
  *
  *Return: number of nodes
  */
size_t free_listint_safe(listint_t **h)
{
	listint_t *cur;
	listint_t *nxt;
	size_t num = 0;

	if (*h == NULL)
		return (num);
	cur = *h;
	for (num = 0; cur != NULL; num++)
	{
		nxt = cur->next;
		free(cur);
		cur = nxt;
		if (cur == *h)
			break;
	}
	*h = NULL;
	return (num);
}
