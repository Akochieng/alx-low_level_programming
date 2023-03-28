#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
  *main - generates random valid passwords
  *
  *Return: 0 success
  */

//initiate an array of characters with the size 
int main()
{
	int len, i, temp;
	char pass[16];

	len = (time(NULL) % 8) + 8;
	for (i = 0; i < len; )
	{
		temp = rand() % 123;
		if ((temp >= 48 && temp <= 57) || (temp >= 65 && temp <= 90) \
			|| (temp >= 97 && temp <= 122))
		{
			pass[i] = (char)temp;
			i++;
		}
	}

	pass[i] = '\0';
	for (i = 0; pass[i] != '\0'; i++)
		putchar(pass[i]);
	return (0);
}
