#include "lists.h"
/**
  *delete_nodeint_at_index - deletes a node at index
  *@head: the head of the node
  *@index: the index of the node
  *
  *Return: 1 if successfull, -1 otherwise
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev, *temp, *next;
	unsigned int pos;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		temp = *head;
		*head = temp->next;
		free(temp);
		return (1);
	}
	prev = *head;
	for (pos = 1; pos < index; pos++)
	{
		prev = prev->next;
		if (prev == NULL)
			return (-1);
	}
	temp = prev->next;
	if (temp == NULL)
		return (1);
	next = temp->next;
	prev->next = next;
	free(temp);
	return (1);
}
