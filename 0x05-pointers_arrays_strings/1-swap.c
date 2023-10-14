#include "main.h"
#include <stdio.h>

/**
 * swap_int - A function that swaps values of two integers
 * @a: integer 1
 * @b: integer two
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
