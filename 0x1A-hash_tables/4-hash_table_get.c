#include "hash_tables.h"
/**
 * hash_table_get - A function to retieve value and key
 * @ht: Hash table
 * @key: Key
 * Return: pointer to value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx = key_index((const unsigned char *)key, ht->size);
	hash_node_t *tmp;

	tmp = ht->array[idx];
	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}
	return (NULL);
}
