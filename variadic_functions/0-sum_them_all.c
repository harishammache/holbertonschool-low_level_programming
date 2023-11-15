#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * sum_them_all - returns the sum of all its parameters
 * @n: first variable
 *
 * Return: 0 if n==0
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int sum;

	va_start(ap, n);

	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(ap, int);
	}
	if (n == 0)
	{
		return (0);
	}
	va_end(ap);

	return (sum);
}
