#include "main.h"
/**
 * _print_rev_recursion -  that prints a string in reverse
 * @s: first pointeur
*/
void _print_rev_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
	{
		return;
	}
	else
	{
		_print_rev_recursion(s + 1);
		_putchar(s[i]);
	}
}
