#include "main.h"
/**
 * print_most_numbers -  the numbers, from 0 to 9
*/
void print_most_numbers(void)
{
	int nombre;

	for (nombre = 0; nombre <= 9; nombre++)
	{
		if (nombre == 2 || nombre == 4)
		{
			continue;
		}
		_putchar(nombre + '0');
	}
	_putchar('\n');
}
