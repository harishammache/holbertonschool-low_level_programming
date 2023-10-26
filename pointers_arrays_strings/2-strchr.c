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

	for (i = 0; s[i] != '\0'; )
	{
		if (s[i] == c)
		{
			return (s);
		}
		if (c == ('\0'))
		{
			s[i] = c;
			return (s);
		}
		s++;
	}
	return (NULL);
}
