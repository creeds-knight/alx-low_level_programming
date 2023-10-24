#include "lists.h"

/**
 * pop_listint - A function t delete the head node
 * @head: pointer to the head
 * Return: Head node's data
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;

	if (*head == NULL)
		return (0);
	temp = *head;
	*head = (*head)->next;
	free(temp);
	return (temp->n);
}
