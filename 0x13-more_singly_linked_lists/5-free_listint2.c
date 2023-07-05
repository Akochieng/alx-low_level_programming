#include "lists.h"
/**
  *free_listint2 - frees singly linked list of type listint_t
  *@head: the head
  *
  *Return: void
  */
void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *next;

	if (head == NULL)
		return;
	if (!(*head == NULL))
	{
		temp = *head;
		while (!(temp == NULL))
		{
			next = temp->next;
			free(temp);
			temp = next;
		}
	}
	*head = NULL;
}
