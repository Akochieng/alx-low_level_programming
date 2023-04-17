#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
  *new_dog - creates a new dog
  *@name: the name of the dog
  *@age: the age of the dog
  *@owner: the owner of the dog
  *Description: creates a new dog using the parameters shared
  *Return: NULL if fails or pointer to new dog object
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;
	char *dogname;
	char *dogowner;
	char *result;

	ptr = malloc(sizeof(dog_t));
	dogname = malloc(strlen(name) + 1);
	dogowner = malloc(strlen(owner) + 1);
	if (ptr == NULL || dogname == NULL || dogowner == NULL)
		return (NULL);
	result = strcpy(dogname, name);
	if (result != dogname)
		return (NULL);
	result = strcpy(dogowner, owner);
	if (result != dogowner)
		return (NULL);
	ptr->name = dogname;
	ptr->age = age;
	ptr->owner = dogowner;
	return (ptr);
}
