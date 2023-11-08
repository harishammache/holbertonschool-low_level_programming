#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: first variable
 * @max: second variable
 *
 * Return: if min > max return NULL , if malloc = 0 return NULL
*/
int *array_range(int min, int max)
{
	int *array_integers;
	int index;

	if (min > max)
	{
		return (NULL);
	}
	array_integers = malloc(sizeof(int) * ((max - min) + 1));
	if (array_integers == NULL)
	{
		return (NULL);
	}
	for (index = 0; min <= max; index++, min++)
	{
		array_integers[index] = min;
	}
	return (array_integers);
}
