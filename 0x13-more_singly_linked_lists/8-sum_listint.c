#include "lists.h"
/**
  *sum_listint - returns sum of the ns in the linked list
  *@head: pointer to the head
  *
  *Return: the sum of ns in the list
  */
int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum = 0;

	if (head == NULL)
		return (sum);
	temp = head;
	while (!(temp == NULL))
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
