#include <stdio.h>
#include "dog.h"
#include "main.h"
/**
  *print_dog - print the contents of a dog struct
  *@d: the struct
  *Description: print the contents of a dog struct
  *Return: void
  */
void print_dog(struct dog *d)
{
	printf("Name: %s\n", d->name);
	printf("Age: %.6f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
