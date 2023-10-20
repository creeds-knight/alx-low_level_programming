#include "lists.h"

/**
 * print_list - A function to print node elements and node number
 * @h: A pointer to the first node element
 * Return: Number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t counter = 0;

	while (h)
	{
		if (h->str)
			printf("[%lu] %s\n", strlen(h->str), h->str);
		else
			printf("[0] (nil)\n");

		h = h->next;
		counter++;
	}
	return (counter);
}
