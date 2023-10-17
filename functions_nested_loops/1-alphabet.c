#include "main.h"
/**
 *  print_alphabet - function that prints the alphabet, in lowercase
*/
void print_alphabet(void)
{
	char alpha_low;

	for (alpha_low = 'a'; alpha_low <= 'z'; alpha_low++)
	{
		_putchar(alpha_low);
	}

	_putchar('\n');
}
