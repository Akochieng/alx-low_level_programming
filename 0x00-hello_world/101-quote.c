#include <stdio.h>
#include <unistd.h>
/**
  * main - A c file to display a string to the standard err.
  * Return - 0 signifying program success
  */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
