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
	int size = 1;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[size] != '\0')
	{
		size++;
	}
	str_copie = malloc((size + 1) * sizeof(char));
	if (size == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		str_copie[i] = str[i];
	}
	str_copie[i] = '\0';
	return (str_copie);
}
