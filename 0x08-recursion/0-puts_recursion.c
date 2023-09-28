#include "main.h"

/**
 * _puts_recursion - A fuction to print out a string followed by a newline
 * @s: input
 * Return: 0
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
