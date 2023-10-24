#include "lists.h"

/**
 * sum_listint - a function that returns the sum of all data in a list
 * @head: Pointer to firet element
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp;

	temp = head;
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
