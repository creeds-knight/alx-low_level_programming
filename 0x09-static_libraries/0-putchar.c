#include <unistd.h>
/**
 * _putchar - writes a character to the stdout
 * @c: The character to print
 *
 * Return: 1 on Success
 * On error, -1 is returned
 */
int _putchar(char c)
{
	return (write(1,&c,1));
}
