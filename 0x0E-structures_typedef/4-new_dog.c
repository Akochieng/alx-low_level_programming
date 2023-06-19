#include "dog.h"
#include <stdlib.h>
/**
  *new_dog - creates a new dog
  *@name: the name of the dog
  *@age: the age of the dog
  *@owner: the owner of the dog
  *
  *Return: pointer to created dog
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *temp = NULL;

	temp = malloc(sizeof(dog_t));
	if (!(temp == NULL))
	{
		temp->name = name;
		temp->age = age;
		temp->owner = owner;
	}
	return (temp);
}
