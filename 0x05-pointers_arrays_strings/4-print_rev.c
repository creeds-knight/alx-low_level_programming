#include "main.h"
 /**
  * print_rev -A function that reverses a string
  * @s: string input
  * Return: void
  */
void print_rev(char *s)
{
	int length = 0;
	int letas = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	s--;
	for (letas = length; letas > 0; letas--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
