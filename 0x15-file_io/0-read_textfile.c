#include "main.h"

/**
* read_textfile - A program that reads a text file and prints to stdout
* @filename: File name
* @letters: File size
* Return: Actual number of letters it could read and print
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fp;
	ssize_t counter = 0;
	char ch;
	/*size_t i = 0;*/

	fp = fopen(filename, "r");

	if (filename == NULL)
		return (0);
	if (fp == NULL)
		return (0);
	while (letters > 0 && (ch = fgetc(fp)) != EOF)
	{
		if (write(STDOUT_FILENO, &ch, 1) == -1)
		{
			fclose(fp);
			return (0);
		}
		counter++;
		letters--;
	}
	fclose(fp);
	return (counter);
}

