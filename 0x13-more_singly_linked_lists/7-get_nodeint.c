#include "lists.h"

/**
 *get_nodeint_at_index - A function to get a node at index
 * @head: pointer to first elemet
 * @index: position of node
 * Return: nnth node of an index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);
	for (i = 0; i < index; i++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
