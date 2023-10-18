#include "main.h"
/**
 * times_table - the 9 times table, starting with 0
*/
void times_table(void)
{
	int a;
	int b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			int multi = a * b;

			if (multi >= 10)
			{
				_putchar((multi / 10) + '0');
				_putchar((multi % 10) + '0');
			}

			if (multi <= 9 && multi >= 0)
			{
				_putchar(' ');
				_putchar(multi + '0');
			}

			if (b == 0)
			{
				_putchar(multi);
			}

			if (b < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
