#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @*: pointeur
 * @b: caractere
 *
 * Return: * (success)
*/
char *string_toupper(char *b)
{
	int i;

	for (i = 0; b[i] != '\0'; i++)
	{
		if ('a' <= b[i] && 'z' >= b[i])
		{
			b[i] = b[i] - 32;
		}
	}
	return (b);
}
