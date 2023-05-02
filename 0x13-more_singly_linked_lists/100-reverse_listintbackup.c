#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

listint_t *reverse_listint(listint_t **head)
{
	listint_t *cur;
	listint_t *prv;
	listint_t *tmp;

	cur = *head;
	prv = NULL;
	while (cur)
	{
		tmp = cur->next;
		cur->next = prv;
		prv = cur;
		cur = tmp;
	}

	*head = prv;
	return (prv);
}
