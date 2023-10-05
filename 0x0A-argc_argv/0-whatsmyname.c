#include <stdio.h>

/**
 * main - A program that prints its name followed by a new line
 * @argc: Number of arguments passed into the program
 * @argv: Array of arguments passed from command line
 * Return: 0 on Success
 */
int main(int argc, char *argv[])
{
	if (argc == 1)
		printf("%s \n", argv[0]);
	return (0);
}
