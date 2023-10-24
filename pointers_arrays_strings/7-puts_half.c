#include "main.h"
/**
 * puts_half -  every other character of a string
 * @str: caractere pointeur
*/
void puts_half(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		a++;
	}
	if (a % 2 != 0)
	{
		a++;
	}
	for (a = a / 2; str[a] != 0 ; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
