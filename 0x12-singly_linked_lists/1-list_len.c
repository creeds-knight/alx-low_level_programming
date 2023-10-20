#include "lists.h"

/**
 * list_len - A fucntion that returns number of elements in a list
 * @h: A pointer to the first node
 * Return: Number of elements in a list
 */

size_t list_len(const list_t *h)
{
	size_t counter = 0;

	while (h)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
