#include "dog.h"
#include <stddef.h>
#include <stdlib.h>
/**
  *free_dog - frees dog
  *@d: the dog
  *
  *Return: void
  */
void free_dog(dog_t *d)
{
	if (!(d == NULL))
	{
		free(d);
	}
	d = NULL;
}
