#include "hash_tables.h"
/**
 * A hash_table_set - A function to add an element to the hash table
 * @ht: The hash Table
 * @key: key value to be used
 * @value: Value to be used
 * Return: 1 on Success and 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx = key_index((const unsigned char *)key, ht->size);
	hash_node_t *newnode;
	hash_node_t *current;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	/* CHecking if node exists and updating the current key*/
	current = ht->array[idx];
	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = strdup(value);
			if (current->value == NULL)
				return (0);
			return 1; /** key updated*/
		}
		current = current->next;
	}
	/** key doesn't exist create a new noode*/
	newnode = malloc(sizeof(hash_node_t));
	if (newnode == NULL)
		return (0);
	newnode->key = strdup(key);
	if (newnode->key == NULL)
	{
		free(newnode);
		return (0);
	}
	newnode->value = strdup(value);
	if (newnode->value == NULL)
	{
		free(newnode->key);
		free(newnode);
		return (0);
	}
	newnode->next = ht->array[idx];
	ht->array[idx] = newnode;
	return (1);
}

