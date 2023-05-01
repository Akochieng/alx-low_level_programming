#include "lists.h"
#include <stdlib.h>
#include <stddef.h>


size_t print_listint_safe(const listint_t *head)
{
	const listint_t *cur;
	size_t num = 0;
	int headcount = 0;

	cur = head;
	while (cur && headcount <= 1)
	{
		if (cur == head)
		{
			headcount++;
			if (headcount > 1)
				break;
		}
		num++;
		printf("[%p] %d\n", (void *)cur, cur->n);
		cur = cur->next;
	}
	return (num);
}
