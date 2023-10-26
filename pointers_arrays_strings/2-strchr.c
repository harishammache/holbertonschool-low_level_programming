#include "main.h"
#include <stddef.h>
/**
 * _strchr - locates a character in a string
 * @s: pointeur
 * @c: caractere
 *
 * Return: c or 0
*/
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; ;i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		if (s[i] == ('\0'))
		{
			return (NULL);
		}
	}
}
