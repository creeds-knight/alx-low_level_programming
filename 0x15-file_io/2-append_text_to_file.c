#include "main.h"

/**
 * append_text_to_file - A function that appendst text to a file
 * @filename: File name
 * @text_content: Text to be appended
 * Return: 1 on success, -1 otherwise
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fp, data;

	if (filename == NULL)
		return (-1);

	fp = open(filename, O_WRONLY | O_APPEND);
	if (fp == -1)
		return (-1);
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
