#include <stdio.h>
/**
 * main - A program that prints lowercase and uppercase
 * Return: 0 (Success)
 */
int main(void)
{
	char c;

	char d;

	c = 'a';
	d = 'A';
	while
		(c <= 'z' && d <= 'Z') {
			putchar(c);
			putchar(d);
			c++;
			d++;
		}
	putchar('\n');
	return (0);
}
