#include "lists.h"
/**
  *find_listint_loop - find the loop in the list
  *@head: the head of the list
  *
  *Return: NULL
  */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *temp = NULL;
	listint_t *safety = NULL;

	temp = head;
	safety = temp->next;
	for ( ; temp != NULL; )
	{
		if (temp == safety)
			return (temp);
		temp = temp->next;
		if (safety->next != NULL)
			safety = safety->next->next;
	}
	return (NULL);
}
