#include "main.h"
#include <stdlib.h>
/**
* alloc_grid - function that returns a pointer
* to a 2 dimensional array of integers
* @width: first variable
* @height: second varaible
*
* Return: If width or height is 0 or negative, return NULL
*/
int **alloc_grid(int width, int height)
{
	int **dimensional_array;
	int i = 0;
	int y = 0;

	if (width <= 0)
	{
		return (NULL);
	}
	if (height <= 0)
	{
		return (NULL);
	}
	dimensional_array = malloc(sizeof(int *) * height);
	if (dimensional_array == 0)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		dimensional_array[i] = malloc(sizeof(int) * width);
		if (dimensional_array == 0)
		{
			for ( ; i >= 0; i--)
			{
				free(dimensional_array[i]);
			}
			free(dimensional_array);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (y = 0; y < width; y++)
		{
			dimensional_array[i][y] = 0;
		}
	}
	return (dimensional_array);
}
