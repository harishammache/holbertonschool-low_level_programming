#include "main.h"
/**
 * print_triangle - prints a triangle with #
 * @size: caractere checked
*/
void print_triangle(int size)
{
	int a, b;


	if (size > 0)
	{
		for (a = 1; a <= size; a++)
		{
			for (b = 1; b <= size; b++)
			{
				if ((a + b) <= size)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			}
			_putchar('\n');

		}

	}
	else
	{
		_putchar('\n');
	}
}
