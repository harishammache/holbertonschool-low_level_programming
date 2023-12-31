#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: first pointeur
 * @s2: second pointeur
 * @n: variable for represent the maximal caractere
 *
 * Return: NULL if fails
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concatenates;
	unsigned int i = 0, j = 0, lengthS1 = 0, lengthS2 = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		lengthS1++;
	}
	for (i = 0; s2[i] != '\0'; i++)
	{
		lengthS2++;
	}
	concatenates = malloc(sizeof(char) * (lengthS1 + n + 1));
	if (concatenates == NULL)
	{
		return (NULL);
	}
	if (n >= lengthS2)
	{
		n = lengthS2;
	}
	for (i = 0; i < lengthS1; i++)
	{
		concatenates[i] = s1[i];
	}
	for (j = 0; j < n; j++, i++)
	{
		concatenates[i] = s2[j];
	}
	concatenates[i] = '\0';
	return (concatenates);
}
