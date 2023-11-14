#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - executes a function given as a parameter
 * @array: first pointeur
 * @size: variable
 * @action: pointeur who point a fonction
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	else
		return;
}
