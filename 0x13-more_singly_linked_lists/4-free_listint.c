#include "lists.h"

/**
 * free_listint - A function that frees the list
 * @head: A pointer to the first element
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	if (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
