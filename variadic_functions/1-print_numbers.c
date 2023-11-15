#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers - prints numbers
 * @separator: constante pointeur
 * @n: variable who represent the size
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int index;

	va_start(ap, n);

	if (separator == NULL)
	{
		return;
	}
	for (index = 0; index < n; index++)
	{
		if (index < n - 1)
		{
			printf("%d", va_arg(ap, int));
			printf("%s", separator);
		}
		else
		{
			printf("%d", va_arg(ap, int));
		}
	}

	va_end(ap);
	printf("\n");
}
