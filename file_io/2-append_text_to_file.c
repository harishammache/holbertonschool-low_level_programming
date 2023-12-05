#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: ilename is the name of the file
 * @tex_content: text_content is the NULL terminated string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int len = 0;
	int w_file = 0;
	int o_file = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	o_file = open(filename, O_APPEND | O_WRONLY);
	if(o_file == -1)
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
