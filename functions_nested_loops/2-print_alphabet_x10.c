#include"main.h"
#include<stdio.h>
/**
 * print_alphabet_x10 - Prints ten times the alphabet, in lowercase
*/
void print_alphabet_x10(void)
{
	char alpha_low;
	int i;

	for (i = 0; i <= 9; i++)
	{
		for (alpha_low = 'a'; alpha_low <= 'z'; alpha_low++)
		{
			_putchar(alpha_low);
		}
		_putchar('\n');
	}
}
