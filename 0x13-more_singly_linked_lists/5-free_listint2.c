#include "lists.h"

/**
 * free_listint2 - Frees a lists and returns
 * @head: The pointer to the first element
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
}
