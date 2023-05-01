#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

listint_t *reverse_listint(listint_t **head)
{
	listint_t *cur;
	listint_t *tmp;

	if (*head == NULL)
		return (NULL);
	tmp = *head;
	cur = tmp->next;
	*head = cur->next;
	tmp->next = NULL;
	while (cur)
	{
		cur->next = tmp;
		tmp = cur;
		cur = tmp->next;
		*head = cur->next;
	}
}
