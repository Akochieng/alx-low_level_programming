#include "lists.h"

size_t list_len(const list_t *h)
{
	const list_t *temp;
	size_t num = 0;

	temp = h;
	for (num = 0; temp != NULL; num++)
		temp = temp->next;
	return (num);
}
