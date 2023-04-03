#include "main.h"
/**
  *set_string - sets the value of a pointer to a char
  *@s: the pointer
  *@to: the new value of the pointer
  *Description: sets the value of a pointer s to to
  *Return: void
  */
void set_string(char **s, char *to)
{
	*s = to;
}
