#include <stdio.h>
/**
 * main - A program that prints combiantion of two digits
 * Return: 0(Successful)
 */
int main(void)
{
	int tens;

	int ones;

	for (tens = 0; tens < 10; tens++)
	{
		for (ones = tens + 1; ones < 10; ones++)
		{
			putchar(tens + '0');
			putchar(ones + '0');
			if (tens < 8 || ones < 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
