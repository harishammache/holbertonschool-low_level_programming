#include "main.h"
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
*/
void more_numbers(void)
{
	int numbersA;
	int numbersB;

	for (numbersA = 0; numbersA < 10; numbersA++)
	{
		for (numbersB = 0; numbersB <= 14; numbersB++)
		{
			if (numbersB >= 10)
			{
				_putchar((numbersB / 10) + '0');
			}
		_putchar((numbersB % 10) + '0');
		}
	_putchar('\n');
	}
}
