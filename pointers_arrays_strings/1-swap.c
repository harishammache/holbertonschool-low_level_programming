#include "main.h"
/**
 * swap_int - that swaps the values of two integers
 * @a: caractere checked
 * @b: cractere checked
*/
void swap_int(int *a, int *b)
{
	int inverse = *a;
	*a = *b;
	*b = inverse;
}
