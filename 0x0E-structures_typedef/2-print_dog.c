#include "dog.h"
#include <stddef.h>
#include <stdio.h>
/**
  *print_dog - prints the dog
  *@d: pointer to the dog
  *
  *Return: void
  */
void print_dog(struct dog *d)
{
	if (!(d == NULL))
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
