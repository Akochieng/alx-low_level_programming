#include "main.h"
/**
  *print_buffer - prints the contents of size bytes of a buffer
  *@b: pointer to the buffer
  *@size: the size of the buffer
  *Description: function that takes in the pointer and size of
  *a buffer and prints its contents, 10 bytes per line with each
  *line starting with the position of the first byte in hexadecimal.
  *Return: void
  */
void print_buffer(char *b, int size)
{
	while (--size)
	{
		putchar(*b);
		b++;
	}
}
