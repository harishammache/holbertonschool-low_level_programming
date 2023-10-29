#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: first pointeur
 * @src: second pointeur
 * @n: caractere checked
 *
 * Return: dest (success)
*/
char *_strncat(char *dest, char *src, int n)
{
	int j = 0;
	int i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
