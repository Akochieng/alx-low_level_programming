#include <stdio.h>
#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
/**
  *print_listint - prints all the elements of a list
  *@h: the head of the list
  *
  *Return: the number of nodes
  */
size_t print_listint(const listint_t *h)
{
	size_t a = 0;
	const listint_t *cur;

	cur = h;
	while (cur)
	{
		print_int(cur->n);
		cur = cur->next;
		a++;
		_putchar('\n');
	}
	return (a);
}
/**
  *print_int - prints an interger to the stdout
  *@num: the number to be printed
  *
  *Return: number of characters printed
  */
size_t print_int(int num)
{
	if (num < 10)
		return (_putchar(num + '0'));
	return (print_int(num / 10) + _putchar((num % 10) + '0'));
}
