#include <stdio.h>
/**
 * main - A program thatprints all single digit numbers of base 10
 * Return: 0 (successful)
 */
int main(void)
{
	int i;

	i = 10;
	for (i = 0; i < 10; i++)
		printf("%d", i);
	putchar('\n');
	return (0);
}
