#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "dog.h"
/**
  *free_dog - frees dogs
  *@d: the dog to be freed
  *Description: frees dogs
  *Return: void
  */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
