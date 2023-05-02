#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
/**
  *print_listint_safe - prints nodes in a list
  *@head: the head of the list
  *
  *Return: the number of nodes in the list or exit code 98
  */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *cur;
	const listint_t *fast;
	size_t num = 0;

	cur = head;
	fast = head;
	while (cur)
	{
		printf("[%p] %d\n", (void *)cur, cur->n);
		cur = cur->next;
		if (fast)
			fast = fast->next->next;
		num++;
		if (cur == fast)
			exit(98);
	}
	return (num);
}
