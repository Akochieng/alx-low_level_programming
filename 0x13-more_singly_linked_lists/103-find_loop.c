#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
  *find_listint_loop - finds the loop in a linked list
  *@head: the head of the list
  *
  *Return: location of the loop or null
  */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *cur;
	listint_t *fast;

	cur = head;
	fast = head;
	while (fast && fast->next)
	{
		cur = cur->next;
		fast = fast->next->next;
		if (cur == fast)
			return (cur);
	}
	return (NULL);
}
