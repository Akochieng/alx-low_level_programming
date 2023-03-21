#include <stdio.h>
#include "main.h"

/**
  *main -  prints _putchar followed by a new line
  *
  *Return: 0 (Success)
  *
  */

int main(void)
{
	char word[] = "_putchar";
	int c;

	c = 0;
	while (word[c] != '\0')
	{
		putchar(word[c]);
		c++;
	}
	putchar('\n');
	return (0);
}
