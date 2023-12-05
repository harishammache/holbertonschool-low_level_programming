#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <fcntl.h>
/**
 * create_file - creates a file
 * @filename: is the name of the file to create
 * @text_content: is a NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
	int len = 0;
	int o_file =  0;
	int w_file = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	o_file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 600);
	if (o_file == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
		{
			len++;
		}
		w_file = write(o_file, text_content, len);
	}
	if (w_file == -1)
	{
		return (-1);
	}
	close(o_file);
	return (1);
}
