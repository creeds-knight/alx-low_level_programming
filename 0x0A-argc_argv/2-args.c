#include "main.h"
#include <stdio.h>

/**
 * main - A program that prints the number of arguments
 * @argc: Number of arguments entered
 * @argv: Array of arguments
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
