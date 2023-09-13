#include "main.h"

/**
 * print_sign - Prints the sign of the given integer
 * @n: the integer
 * Return: 1 with + for positives
 * return: 0 for 0
 * return -1 and - for negatives
 */
int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if	(n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('+');
		return (1);
	}
}
