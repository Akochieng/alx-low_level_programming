#include "lists.h"
/**
  *add_node_end - function to add node at the end of a list
  *@head: the head of the list
  *@str: the string
  *
  *Return: the newly created node
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp, *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	temp = *head;
	while (!(temp->next == NULL))
		temp = temp->next;
	temp->next = new;
	return (new);
}
/**
  *_strlen - function to compute the length of a string
  *@s: the string
  *
  *Return: the length of a string
  */
size_t _strlen(const char *s)
{
	size_t len;

	for (len = 0; s[len] != '\0'; len++)
		;
	return (len);
}
