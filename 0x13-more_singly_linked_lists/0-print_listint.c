#include "lists.h"

/**
 * print_listint - A function to print elements of a list
 * @h: new node to be created
 * Return: Number of nodes
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *temp;
	size_t counter = 0;

	temp = h;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		counter++;
		temp = temp->next;
	}
	return (counter);
}
