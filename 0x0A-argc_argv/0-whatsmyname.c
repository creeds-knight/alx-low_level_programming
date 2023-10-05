#include <stdio.h>

/**
 * main - A program that prints its name followed by a new line
 * @argc: Number of arguments passed into the program
 * @argv: Array of arguments passed from command line
 * Return: 0 on Success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s \n", *argv[]);
	return (0);
}
