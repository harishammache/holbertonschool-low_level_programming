#include "main.h"
/**
 * _strcmp -  function that compares two strings
 * @s1: first pointeur
 * @s2 : second pointeur
 *
 * Return: s1 (success)
*/
int _strcmp(char *s1, char *s2)
{
	int a;
	int b = 0;

	for (a = 0; s1[a] != '\0'; a++)
	{
		if (s1[a] != s2[a])
		{
			b = s1[a] - s2[a];
			return (b);
		}

	}
	return (0);
}
