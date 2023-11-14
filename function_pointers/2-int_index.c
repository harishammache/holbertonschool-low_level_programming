#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: pointeur
 * @size: variable
 * @cmp: pointeur who point a function
 *
 * Return: size <= 0 or no element return -1, return 0 success
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (size <= 0)
	{
		return (-1);
	}
	else
	{
		for (index = 0; index < size; index++)
		{
			if (cmp(array[index]) != 0)
			{
				return (index);
			}
		}
	}
	return (-1);
}
