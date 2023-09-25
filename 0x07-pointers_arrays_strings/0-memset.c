#include "main.h"
/**
 * _memset - fills memorywith a constant value
 * @s: starting address of memory to be filled
 * @b: desired value
 * @n: number of bytes changed
 * Return: changed arrayy with new value for n
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
