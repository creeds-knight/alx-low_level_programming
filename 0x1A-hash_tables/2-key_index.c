#include "hash_tables.h"
/**
 * key_index - A function to return the index at
 * @key: The key
 * @size: Size of the table
 * Return: key index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int i;

	i = hash_djb2(key);
	return (i % size);
}
