#include "hash_tables.h"
#define TABLESIZE 1024
/**
  *main - check the code for creating a hash table
  *
  *
  *Return: pointer to the created hash table
  */

int main(void)
{
	hash_table_t *ht;
	int ret;
	char *value;

	ht = hash_table_create(30);
	ret = hash_table_set(ht, "USA", "Washington");
	ret = hash_table_set(ht, "UK", "London");
	ret = hash_table_set(ht, "Spain", "Madrid");
	ret = hash_table_set(ht, "Germany", "Berlin");
	ret = hash_table_set(ht, "China", "Beijing");
	ret= hash_table_set(ht, "Russia", "Moscow");
	ret = hash_table_set(ht, "Bahrain", "Manama");
	ret = hash_table_set(ht, "Canada", "Ottawa");
	ret = hash_table_set(ht, "Brazil", "Brasilia");
	ret = hash_table_set(ht, "Sweden", "Stockholm");
	ret = hash_table_set(ht, "Iceland", "Reykjavik");
	ret = hash_table_set(ht, "Japan", "Tokyo");
	ret = hash_table_set(ht, "Australia", "Canberra");
	printf("%d\n", ret);
	value = hash_table_get(ht, "Japan");
	printf("%s:%s\n", "Japan", value);
	value = hash_table_get(ht, "Spain");
	printf("%s:%s\n", "Spain", value);
	value = hash_table_get(ht, "UK");
	printf("%s:%s\n", "UK", value);
	value = hash_table_get(ht, "NULL");
	printf("%s:%s\n", "NULL", value);
	hash_table_print(ht);
	hash_table_delete(ht);
	return (EXIT_SUCCESS);
}
