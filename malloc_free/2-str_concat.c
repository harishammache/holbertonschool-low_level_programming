#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenats two strings
 * @s1: first pointer
 * @s2: second pointer
 *
 * Return: null on failure, pointeur if success
*/
char *str_concat(char *s1, char *s2)
{
	int length = 0;
	int length1 = 0;
	int i;
	int j = 0;
	char *s;

	if (s1 == 0)
	{
		return (NULL);
	}
	if (s2 == 0)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		length++;
	}
	for (i = 0; s2[i] != '\0'; i++)
	{
		length1++;
	}
	s = malloc((sizeof(char) * ((length + length1) + 1)));
	if (s == 0)
	{
		return (NULL);
	}
	for (i = 0; i < length; i++)
	{
		s[i] = s1[i];
	}
	for (j = 0; j < length1; j++, i++)
	{
		s[i] = s2[j];
	}
	s[length + length1] = '\0';

	return (s);
}
