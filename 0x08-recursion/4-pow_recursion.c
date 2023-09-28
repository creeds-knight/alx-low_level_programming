#include "main.h"

/**
 * _pow_recursion - A fuction that gets the power of a certain number
 * @x: input
 * @y: input
 * Return: answer
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
