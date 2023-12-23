#include "hash_tables.h"
/**
 * hash_table_print - A function to print the hash table
 * @ht: The hash table
 * Return: None
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			printf("'%s' : '%s'", ht->array[i]->key, ht->array[i]->value);
			if (i < (ht->size - 1))
				printf(", ");
		}
	}
	printf("}\n");
}
