#include "dog.h"
/**
  *init_dog - initialises the struct dog
  *@name: the name of the dog
  *@d: pointer to the struct
  *@age: the age of the dog
  *@owner: the owner of the dog
  *
  *Return: void
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
