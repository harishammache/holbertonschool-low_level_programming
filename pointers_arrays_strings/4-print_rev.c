#include "main.h"
/**
 * print_rev - prints a string, in reverse
 * @s: caractere checked
*/
void print_rev(char *s)
{
	int rev = 0;

	while (s[rev] != '\0')
	{
		rev++;
	}

	s--;

	for (; rev >= 0; rev--)
	{
		_putchar(s[rev]);
	}
	_putchar('\n');
}
