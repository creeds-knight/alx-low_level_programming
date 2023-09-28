#include "main.h"
int actual_sqrt_recursion(int n, int i);
/**
 * _sqrt_recursion - A function to get the natural squarw root of a number
 * @n: input
 * Return: Square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - Finds the natural numbers
 * @n: input
 * @i: iterator
 * Return: squareroot
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}
