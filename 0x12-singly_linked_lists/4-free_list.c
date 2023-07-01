#include "lists.h"
/**
  *free_list - function to free a single linked list
  *@head: the head of the list
  *
  *Return: void
  */
void free_list(list_t *head)
{
	list_t *temp;

	temp = head;
	while (!(temp == NULL))
	{
		head = temp;
		temp = head->next;
		free(head->str);
		free(head);
	}
	free(temp);
}
