#include "main.h"
/**
 * puts2- A function shoud print only one character out f two
 * @str: string input
 * Return: print
 */
void puts2(char *str)
{
	int length = 0;
	int t = 0;
	char *y = str;
	int m;

	while (*y != '\0')
	{
		y++;
		length++;
	}
	 t = length -1;
	 for (m = 0; m <= t; m++)
	 {
		 if (m % 2 == 0)
		 {
			 _putchar(str[0]);
		 }
	 }
	 _putchar('\n');
}
