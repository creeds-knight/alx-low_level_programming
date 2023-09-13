#include "main.h"

/**
 * _islower - This checks if the character is lowercase
 *@c: letter to be checked
 * Return: 1 (Successful)
 * 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
