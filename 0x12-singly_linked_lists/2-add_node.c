#include "lists.h"

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = _strlen(str);
	temp = *head;
	new->next = temp;
	*head = new;
	return (*head);
}

size_t _strlen(const char *s)
{
	size_t len;

	for (len = 0; s[len] != '\0'; len++)
		;
	return (len);
}
