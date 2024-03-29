#include "hash_tables.h"
/**
  *main - simple entry point for the test case
  *
  *Return: 0 on success
  */
int main(void)
{
	shash_table_t *ht;

	ht = shash_table_create(1024);
	printf("%p\n", (void *)ht);
	printf("%lu\n", ht->size);
	shash_table_set(ht, "y", "0");
	shash_table_set(ht, "j", "1");
	shash_table_set(ht, "c", "2");
	shash_table_set(ht, "b", "3");
	shash_table_set(ht, "z", "4");
	shash_table_set(ht, "n", "5");
	shash_table_set(ht, "a", "6");
	shash_table_set(ht, "m", "7");
	shash_table_print(ht);
	printf("The value of key: %s is %s\n\n\n", "z", shash_table_get(ht,
				"z"));
	shash_table_print_rev(ht);
	shash_table_delete(ht);
	return (EXIT_SUCCESS);
}
