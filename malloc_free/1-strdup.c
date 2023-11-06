#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: pointeur
 *
 * Return: NULL if str=NULL , return pointeur if success.
*/
char *_strdup(char *str)
{
	char *str_copie;
	int i;
	unsigned int size = 0;

	while (str[size] != '\0')
	{
		size++;
	}
	str_copie = malloc((size + 1) * sizeof(char));

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= size; i++)
	{
		str_copie[i] = str[i];
	}
	if (size == 0)
	{
		return (NULL);
	}
	return (str_copie);
}
