#include "main.h"
/**
 * set_string - sets the value of a pointer to a character
 * @s: pointer to pointer
 * @to: pointer to char
 * Return: 0
 */
void set_string(char **s, char *to)
{
	*s = to;
}
