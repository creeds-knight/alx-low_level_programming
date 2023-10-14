#include "main.h"

/**
 * puts_half - A function that prints as string in half
 * if odd len, n = (length_of_string -1)/2
 * @str: string input
 * Return: half of the input string
 */
void puts_half(char *str)
{
	int a;
	int n;
	int length;

	for (a = 0; str[a] != '\0'; a++)
		length++;
	n = (length / 2);
	if ((length % 2) == 1)
		n = ((length + 1) / 2);
	for (a = n; str[a] != '\0'; a++)
		_putchar(str[a]);
	_putchar('\n');
}
