#include "hash_tables.h"
/**
 * hash_table_create - A function to create a hash table
 * @size: Size of the array used for the table
 * Return: A pointer to the array
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *newtable = (hash_table_t *) malloc(sizeof(hash_table_t));

	if (newtable == NULL)
		return (NULL);
	newtable->size = size;
	newtable->array = (hash_node_t **) calloc(newtable->size,
			sizeof(hash_node_t *));
	if (newtable->array == NULL)
	{
		free(newtable);
		return (NULL);
	}

	for (i = 0; i < newtable->size; i++)
		newtable->array[i] = NULL;
	return (newtable);
}
