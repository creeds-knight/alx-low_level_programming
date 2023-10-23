#include "lists.h"

/**
 * listint_len - A function that returns the number of elements in a list
 * @h: The head of the  node to be created in the list
 * Return: The number of elements in a linked lists
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *temp = h;
	size_t res = 0;

	while (temp != NULL)
	{
		temp = temp->next;
		res++;
	}
	return (res);
}
