#include <stdio.h>
/**
 * main - A program that combines 3digits
 * Return:(0) Successful
 */
int main(void)
{
	int hundreds;

	int tens;

	int ones;

	for (hundreds = 0; hundreds < 10; hundreds++)
	{
		for (tens = hundreds + 1; tens < 10; tens++)
		{
			for (ones = tens + 1; ones < 10; ones++)
			{
				putchar(hundreds + '0');
				putchar(tens + '0');
				putchar(ones + '0');
				if (hundreds < 7 || tens < 8 || ones < 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
