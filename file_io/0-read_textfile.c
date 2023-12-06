#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <fcntl.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 *
 * @filename: pointeur
 * @letters:  letters is the number of letters it should read and print
 *
 * Return:  actual number of letters it could read and print
 *			if filename is NULL return 0
 *			if write fails or does not write the expected amount of bytes, return 0
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t r_file = 0;
	ssize_t o_file = 0;
	ssize_t w_file = 0;
	char *buf;

	buf = malloc(sizeof(char) * letters);

	if (filename == NULL)
	{
		return (0);
	}

	o_file = open(filename, O_RDONLY);
	if (o_file == -1)
	{
		return (0);
	}
	r_file = read(o_file, buf, letters);
	if (r_file == -1)
	{
		return (0);
	}
	w_file = write(STDOUT_FILENO, buf, r_file);
	if (w_file == -1)
	{
		return (0);
	}
	close(o_file);
	free(buf);
	return (r_file);
}
