#include "main.h"
/**
 * print_last_digit - A program that prints the last digit
 * @n: digit to be calculated
 * Return: lastdigit
 */
int print_last_digit(int n)
{
	int lastdigit;
	
	lastdigit = n % 10;
	if (lastdigit < 0)
		lastdigit = lastdigit * -1;
	_putchar(lastdigit +'0');
	return (lastdigit);
}
