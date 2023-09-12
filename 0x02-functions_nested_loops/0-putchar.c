#include "main.h"
/**
 * main - A program that prints _putchar
 * Return: 0(Successful)
 */
int main(void)
{
	char word[] = "_putchar";

	printword(word);
	return (0);
}

/**
 * printword - This function uses _putchar to print a word
 * @word: This is the word to be printed
 */
void printword(char *word)
{
	int i;

	for (i = 0; word[i] != '\0'; i++)
		_putchar(word[i]);
	_putchar('\n');
}
