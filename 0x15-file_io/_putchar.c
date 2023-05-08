#include <unistd.h>
/**
  *_putchar - print character to the std output
  *@c: the character to print
  *Description: uses the system call write to print to the stdout
  *Return: number of characters written to stdout
  */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
