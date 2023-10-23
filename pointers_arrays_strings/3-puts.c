#include "main.h"
#include <stddef.h>
/**
 * _puts - prints a string, to stdout
 * @str: caractere checked
*/
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
