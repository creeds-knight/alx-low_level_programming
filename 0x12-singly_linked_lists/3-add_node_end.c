#include "lists.h"

/**
 * add_node_end - A function that adds a node at the end of list
 * @head: pointer to the pointer of head
 * @str: The data contained in the pointer
 * Return: address of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode;
	list_t *temp;

	newNode = (list_t *) malloc(sizeof(list_t));

	if (newNode == NULL)
		return (NULL);
	newNode->str = strdup(str);
	if (newNode->str == NULL)
	{
		free(newNode);
		return (NULL);
	}
	newNode->len = strlen(newNode->str);
	newNode->next = NULL;
	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}
	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = newNode;
	return (newNode);
}

