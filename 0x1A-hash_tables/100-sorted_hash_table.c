#include "hash_tables.h"
/**
  *shash_table_create - creates a new hash table
  *@size: the size of the table
  *
  *Return: the newly created table
  */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht = NULL;
	unsigned long int i;

	if (size == 0)
		return (NULL);
	ht = malloc(sizeof(shash_table_t));
	if (ht == NULL)
		return (NULL);
	ht->size = size;
	ht->array = malloc(sizeof(shash_node_t *) * size);
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		ht->array[i] = NULL;
	ht->shead = NULL;
	ht->stail = NULL;
	return (ht);
}
/**
  *shash_table_set - adds an element to the hash table
  *@ht: the hash table
  *@key: the key
  *@value: the value to be added
  *
  *Return: 0 on failure and 1 on success
  */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	shash_node_t *prev = NULL;
	shash_node_t *temp = NULL;

	temp = malloc(sizeof(shash_node_t));
	if (temp == NULL)
		return (0);
	temp->key = strdup(key);
	temp->value = strdup(value);
	temp->sprev = temp->snext = temp->next = NULL;
	index = key_index((const unsigned char *)key, 1024);
	if (ht->array[index] == NULL)
	{
		ht->array[index] = temp;
		temp->next = NULL;
	}
	else
	{
		prev = ht->array[index];
		while (prev->next != NULL)
			prev = prev->next;
		prev->next = temp;
		temp->next = NULL;
	}
	if (ht->shead == NULL && ht->stail == NULL)
	{
		ht->shead = temp;
		ht->stail = temp;
	}
	else
		insert_in_table_list(ht, temp);
	return (1);
}
/**
  *insert_in_table_list - inserts a node in the table at the right position
  *@ht: the hash table
  *@new: the node to be inserted
  *Description: the function inserts a node at location in a sorted format
  *
  *Return: 1 on success, 0 otherwise
  */
int insert_in_table_list(shash_table_t *ht, shash_node_t *new)
{
	shash_node_t *prev, *nxt;
	int state = 0;

	if (ht->shead == NULL && ht->stail == NULL)
	{
		ht->shead = new;
		ht->stail = new;
		return (1);
	}
	prev = nxt = NULL;
	nxt = ht->shead;
	while (nxt != NULL)
	{
		state = strcmp(nxt->key, new->key);
		if (state >= 0)
			break;
		prev = nxt;
		nxt = prev->snext;
	}
	if (prev)
		prev->snext = new;
	else
		ht->shead = new;
	new->sprev = prev;
	if (nxt)
		nxt->sprev = new;
	else
		ht->stail = new;
	new->snext = nxt;
	return (1);
}
/**
  *shash_table_get - get the a value from the table
  *@ht: the table
  *@key: the key
  *
  *Return: the value associated with the key
  */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	shash_node_t *temp;

	if (key == NULL)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
		return (NULL);
	temp = ht->array[index];
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);
		temp = temp->next;
	}
	return (NULL);
}
/**
  *shash_table_print - prints the contents of the hash table
  *@ht: the hash table
  *
  *Return: void
  */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *temp;
	char state = 0;

	temp = ht->shead;
	printf("{");
	while (temp != NULL)
	{
		if (state == 1)
			printf(", ");
		printf("'%s': '%s'", temp->key, temp->value);
		temp = temp->snext;
		state = 1;
	}
	printf("}\n");
}

/**
  *shash_table_print_rev - prints the contents of the hash table
  *@ht: the hash table
  *
  *Return: void
  */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *temp;
	char state = 0;

	temp = ht->stail;
	printf("{");
	while (temp != NULL)
	{
		if (state == 1)
			printf(", ");
		printf("'%s': '%s'", temp->key, temp->value);
		temp = temp->sprev;
		state = 1;
	}
	printf("}\n");
}
/**
  *shash_table_delete - cleans up the hash table
  *@ht: the hash table
  *
  *Return: void
  */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *cur, *nxt;
	unsigned long int count;

	for (count = 0; count < ht->size; count++)
		if (ht->array[count] != NULL)
		{
			cur = ht->array[count];
			while (cur != NULL)
			{
				nxt = cur->next;
				free(cur->key);
				free(cur->value);
				free(cur);
				cur = nxt;
			}
			ht->array[count] = NULL;
		}
	free(ht->array);
	free(ht);
}
