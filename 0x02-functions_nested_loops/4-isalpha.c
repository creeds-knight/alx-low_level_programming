#include "main.h"

/**
 * _isalpha - Checks if a character is in the alphabet
 * @c: character to  be checked
 * Return: 1 (Successful)
 * 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))

		return (1);

	else
		return (0);
}
