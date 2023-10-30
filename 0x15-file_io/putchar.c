#include "main.h"
#include <unistd.h>
/**
 * _putchar - Writes a character to the standard output
 * @c: Character to be written to standard output
 * Return: the value
 */

int _putchar(char c)
{
	return (write(STDOUT_FILENO,&c,1));
}
