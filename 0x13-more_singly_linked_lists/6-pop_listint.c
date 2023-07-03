#include "lists.h"
/**
  *pop_listint - pops the head and returns its data
  *@head: pointer to the head
  *
  *Return: value of n
  */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num = 0;

	if (*head == NULL)
		return (num);
	temp = *head;
	*head = temp->next;
	num = temp->n;
	free(temp);
	return (num);
}
