#include <stdio.h>
#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointeur
 *
 * Return:  0 b is NULL,  the converted number if success
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int convert_binary = 0;

	if (b == NULL)
		return (0);
	while (*b != '\0')
	{
		convert_binary = convert_binary << 1;
		if (*b != '1' && *b != '0')
			return (0);
		else if (*b == '1')
			convert_binary = convert_binary | 1;
		b++;
	}
	return (convert_binary);
}
