#include "main.h"
#include <fcntl.h>
/**
 * main - copies the content of a file to another file
 * @argc: argument count
 * @argv: array of arguments
 *
 * Return: an integer
 */
int main(int argc, char **argv)
{
	int o_file, o_file_copy, w_file, r_file;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	o_file = open(argv[1], O_RDONLY);
	if (o_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	o_file_copy = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (o_file_copy == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((r_file = read(o_file, buf, 1024)) > 0)
	{
		w_file = write(o_file_copy, buf, r_file);
		if (w_file == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (r_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (close(o_file) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", o_file);
		exit(100);
	}
	if (close(o_file_copy) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", o_file_copy);
		exit(100);
	}
	return (0);
}
