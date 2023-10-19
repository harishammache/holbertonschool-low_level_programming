#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: caractere checked
*/
void print_diagonal(int n)
{
	int a;
	int b;

	if (n > 0)
	{
		for (a = 0; a < n; a++)
		{
			for (b = 0; b < n; b++)
			{
				if (a == b)
				{
					_putchar('\\');
				}
				else
				{
					_putchar(' ');
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
