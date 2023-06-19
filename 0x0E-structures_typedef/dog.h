#ifndef MAIN_H
#define MAIN_H
/**
  *struct dog - struct to define the characteristics of a dog
  *@name: the name of the dog
  *@age: the age of the dog
  *@owner: the owner of the dog
  *Description: struct defining the details of a dog including
  *the owner
  */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
