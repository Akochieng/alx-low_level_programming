#include "lists.h"
/**
  *print_list - function to print singly linked lists
  *@h: the head of the list
  *
  *Return: the number of nodes
  */
size_t print_list(const list_t *h)
{
	const list_t *temp;
	size_t count = 0;

	if (h == NULL)
		return (0);
	temp = h;
	while (!(temp == NULL))
	{
		printf("[%u] %s\n", temp->len, temp->str == NULL ? "(nil)" : temp->str);
		count++;
		temp = temp->next;
	}
	return (count);
}
