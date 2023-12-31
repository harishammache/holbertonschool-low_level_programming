#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array
 * @nmemb: variable element
 * @size: second variable for the size
 *
 * Return: nmemb or size = 0 return NULL
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *allocates_array;
	unsigned int index;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	allocates_array = malloc(size * nmemb);
	if (allocates_array == NULL)
	{
		return (NULL);
	}
	for (index = 0; index < size * nmemb; index++)
	{
		allocates_array[index] = 0;
	}
	return (allocates_array);
}
