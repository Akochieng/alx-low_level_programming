#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
/**
  *delete_nodeint_at_index - deletes a node given the index
  *@head: pointer to the head
  *@index: the location of the node
  *Description: uses index to find a node and delete it
  *Return: the value of n in the node
  */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prv;
	listint_t *del;
	unsigned int n;

	if (*head == NULL)
		return (-1);
	prv = *head;
	if (index == 0)
	{
		*head = prv->next;
		free(prv);
		return (1);
	}
	for (n = 0; prv; n++)
	{
		if (n == index - 1)
			break;
		prv = prv->next;
	}
	if ((n != (index - 1)) || !(prv->next))
		return (-1);
	del = prv->next;
	prv->next = del->next;
	free(del);
	return (1);
}
