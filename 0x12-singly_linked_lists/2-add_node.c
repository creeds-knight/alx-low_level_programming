#include "lists.h"

/**
 * add_node - A function to a add a new node to the begining of a list
 * @head: A pointer to a pointer of head
 * @str: The new data to be passed into the node
 * Return: the address of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode = (list_t *)malloc(sizeof(list_t));

	newNode->str = strdup(str);
	newNode->next = *head;
	*head = newNode;
	printf("[%lu] %s\n", strlen(newNode->str), newNode->str);
	return (newNode);
}
