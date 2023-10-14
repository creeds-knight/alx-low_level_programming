#include "main.h"
/**
 * _strlen - A function that returns the length of a string
 * @s: string input
 * Return: length of the string
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
