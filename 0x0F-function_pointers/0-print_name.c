#include "function_pointers.h"
/**
  *print_name - prints a name
  *@name: the name
  *@f: function pointer to the actual function
  *Description: uses a function pointer to print the string name
  *Return: void
  */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
