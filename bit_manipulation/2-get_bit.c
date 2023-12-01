#include "main.h"
#include <stdio.h>

/**
 *get_bit - returns the value of a bit at a given index.
 * @n: integer n
 * @index: starting from 0 of the bit you want to get
 *
 *Return: value of the bit at if success and -1 if error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(n) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
