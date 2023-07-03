#include "lists.h"

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *temp;
	const listint_t *safety;
	size_t num = 0;

	if (head == NULL)
		return (num);
	temp = head;
	if (temp->next->next)
		safety = temp->next->next;
	for(num = 0; temp != NULL; num++)
	{
		if (temp == safety)
			exit(98);
		printf("[%p] %d\n", (void *)temp, temp->n);
		temp = temp->next;
		if (safety->next != NULL)
			safety = safety->next->next;
	}
	return (num);
}
