#include "main.h"
#include <stddef.h>
/**
 * _strcpy - copies the string pointed to by src
 * @dest: pointeur
 * @src: point
 *
 * Return: dest (success)
*/
char *_strcpy(char *dest, char *src)
{
	int i;
	int  n = 0;

        for (i = 0; src[i] != '\0'; i++)
	{
        	dest[i] = src[i];
	}
	for ( ; i < n; i++)
       	{	
		dest[i] = '\0';
	}
	return (dest);
}
