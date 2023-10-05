#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - A program that prints the result of the multiplication
 * @argc: Number of arguments passed
 * @argv: Array of arguments passed into the command line
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int res;

	res = atoi(argv[1]) * atoi(argv[2]);
	if (argc != 3)
	{
		printf("Error \n");
		return (1);
	}
	else
		printf("%d\n", res);
	return (0);
}
