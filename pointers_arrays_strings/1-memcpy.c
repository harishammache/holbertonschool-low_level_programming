#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: pointeur
 * @src: second pointeur
 * @n : caractere
 *
 * Return: dest (success)
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	 unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
