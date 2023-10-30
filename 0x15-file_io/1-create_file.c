#include "main.h"

/**
 * create_file - A function that creates a file
 * @filename: File name
 * @text_content: Content of the file
 * Return: 1 on success, -1 otherwise
 */

int create_file(const char *filename, char *text_content)
{
	int fp;
	int data;

	if (filename == NULL)
		return (-1);
	fp = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fp == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		data = write(fp, text_content, strlen(text_content));
		if (data == -1)
		{
			close(fp);
			return (-1);
		}
	}
	close(fp);
	return (1);

}
