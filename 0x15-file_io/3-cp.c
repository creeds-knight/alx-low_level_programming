#include "main.h"
/**
 * error_code - A fuction to handle errors
 * @code: Error code
 * @message: Error message
 */

void error_code(int code, const char *message)
{
	dprintf(STDERR_FILENO, "%s\n", message);
	exit(code);
}

/**
 * main - A function to copy files from one file to another
 * @argc: Number of arguments passed
 * @argv: List of arguments passed
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int fp_from;
	int fp_to;
	ssize_t bytes_read, bytes_written;
	char buffer[1024];

	if (argc != 3)
		error_code(97, "Uasge: cp file_from file_to");
	fp_from = open(argv[1], O_RDONLY);
	if (fp_from == -1)
		error_code(98, "Error: Can't read from file");
	fp_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fp_to == -1)
		error_code(99, "Error: Can't write to file");
	while ((bytes_read = read(fp_from, buffer, sizeof(buffer))) > 0)
	{
		bytes_written = write(fp_to, buffer, bytes_read);
		if (bytes_written == -1)
		{
			error_code(99, "Can't write to file");
		}
	}
	if (bytes_read == -1)
		error_code(98, "Error: Can't read from file");
	if (close(fp_from) == -1)
		error_code(100, "Can't close fp");
	if (close(fp_to) == -1)
		error_code(100, "Can't close fp");
	return (0);
}
