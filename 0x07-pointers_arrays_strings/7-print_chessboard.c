#include "main.h"
/**
 * print_chessboard - Prints the chessboard
 * @a: array
 * Return: 0
 */
void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
			_putchar(a[1][j]);
		_putchar('\n');
	}
}
