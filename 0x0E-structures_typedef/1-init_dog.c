#include <stdio.h>
#include "main.h"
#include "dog.h"
/**
  *init_dog - initialise the values of dog
  *@d: pointer to the struct
  *@name: name of the dog
  *@age: age of the dog
  *@owner: owner of the dog
  *Description: initialise the parameters of the struct dog
  *Return: void
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
