#include "main.h"
/**
  *_putchar - prints a character
  *@c: the character
  *
  *Return: number of characters printed
  */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
