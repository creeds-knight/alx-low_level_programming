#include "hash_tables.h"
/**
 * free_node_list - A function to free the node
 * @head: A pointer to the first element of the list
 * Return: NOne
 */
void free_node_list(hash_node_t *head)
{
	hash_node_t *tmp = head;
	hash_node_t *next;

	while (tmp != NULL)
	{
		next = tmp->next;
		free(tmp->key);
		free(tmp->value);
		free(tmp);
		tmp = next;
	}
}
/**
 * hash_table_delete - A function to delete a hash table
 * @ht: The table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			free_node_list(ht->array[i]);
		}
	}
	free(ht->array);
	free(ht);
}

