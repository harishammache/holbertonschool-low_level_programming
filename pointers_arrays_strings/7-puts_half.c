#include "main.h"
/**
 * puts_half -  every other character of a string
 * @str: caractere pointeur
*/
void puts_half(char *str)
{
	int a = 0;
	int b;

	while (str[a] != '\0')
	{
		a++;
	}
	for (b = a / 2; b < a; b++)
		if (b % 2 != 0)
		{
			_putchar(str[b] - 1 / 2);
		}
		else
		{
			_putchar(str[b]);
		}
	_putchar('\n');
}
