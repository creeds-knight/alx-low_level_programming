#include "lists.h"

/**
 * add_nodeint - A function that adds a node
 * @head: The head the node
 * @n: The data to be in the lists
 * Return: the address of the new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode = (listint_t *) malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = *head;
	*head = newNode;
	return (newNode);
}
