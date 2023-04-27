#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
/**
  *add_node_end - adds nodes at the end of the list
  *@head: the head of the list
  *@str: the string to be added to the node
  *
  *Return: the new node
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *cur = *head;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->next = NULL;
	if (head == NULL)
		head = &new;
	else if (cur)
	{
		while (cur->next)
			cur = cur->next;
		cur->next = new;
	}
	return (new);
}
