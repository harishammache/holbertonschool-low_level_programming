#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * *create_array - creates an array of chars
 * @size: variable use for know the size of unity
 * @c: second variable for know the number of element
 *
 * Return: NULL if size = 0 or pointer if success
*/
char *create_array(unsigned int size, char c)
{
	char *array_of_char;
	unsigned int i;

	array_of_char = malloc((size + 1) * sizeof(char));

	if (array_of_char == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array_of_char[i] = c;
	}
	array_of_char[i] = '\0';
	return (array_of_char);
}
