#include <stdio.h>


/**
  *_putchar -  prints _putchar followed by a new line
  *
  *Return: 0 (Success)
  *
  */

int _putchar(void)
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
