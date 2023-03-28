#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
  *main - generates random valid passwords
  *
  *Return: 0 success
  */
int main(void)
{
	int len, i, temp;
	char pass[16];

	srand(time(NULL));
	len = (time(NULL) % 8) + 8;
	for (i = 0; i < len; )
	{
		temp = rand() % 123;
		if ((temp >= 65 && temp <= 90) || (temp >= 97 && temp <= 122))
			pass[i] = (char)temp;
		else
			pass[i] = '0' + (temp % 10);
		i++;
	}

	pass[i] = '\0';
	for (i = 0; pass[i] != '\0'; i++)
		putchar(pass[i]);
	return (0);
}
