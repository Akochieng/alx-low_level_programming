#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
  **print_list - prints the contents of a linked list
  *@h: the head to the linked list
  *
  *Return: the length of the linked list
  */
size_t print_list(const list_t *h)
{
	size_t num = 0;
	char *strg;
	const list_t *cur = h;

	while (cur)
	{
		strg = cur->str != NULL ? cur->str : "(nil)";
		printf("[%d] %s\n", _strlen(cur->str), strg);
		cur = cur->next;
		num++;
	}
	return (num);
}
/**
  *_strlen - find the length of a string
  *@s: the string
  *
  *Return: length of the string(unsigned int)
  */
unsigned int _strlen(char *s)
{
	unsigned int len = 0;

	if (s == NULL)
		return (0);
	while (*s++)
		len++;
	return (len);
}
