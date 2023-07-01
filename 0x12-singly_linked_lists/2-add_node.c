#include "lists.h"
/**
  *add_node - function to add node at the head of a list
  *@head: pinter to the head
  *@str: the string
  *
  *Return: the new node
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->str = strdup(str);
	new->len = _strlen(str);
	temp = *head;
	new->next = *head == NULL ? NULL : temp;
	*head = new;
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
