#include "main.h"
#include <stdlib.h>
/**
* malloc_checked - allocates memory using malloc
* @b: positif variable
*
* Return: pointer to the allocated memory
*/
void *malloc_checked(unsigned int b)
{
	char *allocates_memory;

	allocates_memory = malloc(b);
	if (allocates_memory == NULL)
	{
		exit(98);
	}
	else
	{
		return (allocates_memory);
	}
}
