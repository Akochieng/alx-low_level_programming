#include "lists.h"
/**
  *print_listint_safe - prints a linked list with loops
  *@head: the head of the list
  *
  *Return: the number of nodes in the list
  */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *temp = NULL;
	const listint_t *safety = NULL;
	size_t num = 0;

	if (head == NULL)
		return (num);
	temp = head;
	safety = temp->next;
	for(num = 0; temp != NULL && temp != safety; num++)
	{
		if (safety == temp)
		{
			printf("->[%p] %d\n", (void *)temp, temp->n);
			break;
		}
		printf("[%p] %d\n", (void *)temp, temp->n);
		temp = temp->next;
		if (safety != NULL && safety->next != NULL)
			safety = safety->next->next;
		else if (safety != NULL)
			safety = safety->next;
	}
	return (num);
}
