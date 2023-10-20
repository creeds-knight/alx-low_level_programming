#ifndef LIST_H
#define LIST_H
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * struct node - A structure that holds data for a node
 * @str: A string of characters
 * @len: Length of the string
 * @next: The address of the next node
 * Description: This is a node that contains strin, string length and pointer
 */

typedef struct node
{
	char *str;
	int len;
	struct node *next;
} list_t;
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
#endif
