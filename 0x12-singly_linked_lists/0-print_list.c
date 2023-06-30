#include "lists.h"

size_t print_list(const list_t *h)
{
	const list_t *temp;
	size_t count = 0;

	if (h == NULL)
		return (0);
	temp = h;
	while (!(temp == NULL))
	{
		printf("[%u] %s\n", h->len, h->str == NULL ? "(nil)" : h->str);
		count++;
		temp = temp->next;
	}
	return (count);
}
