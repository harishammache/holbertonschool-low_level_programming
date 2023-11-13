#include "dog.h"
/**
 * _strncpy - copies a string
 * @dest: first pointeur
 * @src: second pointeur
 * @n: caractere
 *
 * Return: dest (success)
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i]; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
