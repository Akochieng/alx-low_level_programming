#include "main.h"
/**
  *rot13 - encodes a string using rot13
  *@enc: string to be encoded
  *Description: encodes a string using rot13
  *Return: pointer to the encoded string
  */
char *rot13(char *enc)
{
	char *temp = enc;

	while (*temp != '\0')
	{
		if (*temp >= 'a' && *temp <= 'z')
			*temp = ((*temp - 96 + 13) % 26) + 96;
		temp++;
	}
	return (enc);

}
