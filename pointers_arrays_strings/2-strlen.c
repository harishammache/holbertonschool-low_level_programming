#include "main.h"
/**
 * _strlen - returns the length of a string.
 * @s: caractere checked
 *
 * Return: lenght
*/
int _strlen(char *s)
{
	int lenght = 0;

	while (*s != '\0')
	{
		lenght++;
	}
	return (lenght);
}
