#include "main.h"
/**
 * puts2 - every other character of a string, starting with the first character
 * @str: pointeur
*/
void puts2(char *str)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
