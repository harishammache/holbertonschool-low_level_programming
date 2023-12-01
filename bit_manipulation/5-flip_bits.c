#include "main.h"

/**
 *flip_bits - returns the number of bits
 *@n: integer
 *@m: second integer
 *
 *Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor;
	unsigned long int i;

	i = 0;
	xor = n ^ m;
	while (xor)
	{
		if (xor & 1)
			i++;
		xor >>= 1;
	}
	return (i);
}
