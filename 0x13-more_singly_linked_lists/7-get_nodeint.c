#include "lists.h"
/**
  *get_nodeint_at_index - returns the node at index index
  *@head: pointer to the head
  *@index: the position
  *
  *Return: the node at position index
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int num = 0;

	if (head == NULL)
		return (NULL);
	temp = head;
	for (num = 0; num < index; num++)
	{
		temp = temp->next;
		if (temp == NULL)
			return (NULL);
	}
	return (temp);
}
