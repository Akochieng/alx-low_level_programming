#include "lists.h"
/**
  *free_listint - frees up singly linked list of typle listint_t
  *@head: the head of the list
  *
  *Return: void
  */
void free_listint(listint_t *head)
{
	listint_t *temp;
	listint_t *next;

	if (!(head == NULL))
	{
		temp = head;
		while (!(temp == NULL))
		{
			next = temp->next;
			free(temp);
			temp = next;
		}
	}
}
