#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: first pointeur
 * @src: seconde pointeur
 *
 * Return: dest (success)
*/
char *_strcat(char *dest, char *src)
{
	int j;
	int i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	for (j = 0; src[j] != '\0'; j++, i++)
	{
		dest[i] = src[j];
	}
	dest[i] = '\0';

	return (dest);
}
