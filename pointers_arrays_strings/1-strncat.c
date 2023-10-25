#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: pointeur strlen.
 *
 * Return: lenght (success)
*/
int _strlen(char *s)
{
	int lenght = 0;

	while (*(s + lenght) != '\0')
	{
		lenght++;
	}
	return (lenght);
}

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
	int i = 0;
	int j = _strlen(dest);

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[j + i] = src[i];
	}
	dest[j + i] = '\0';

	return (dest);
}
