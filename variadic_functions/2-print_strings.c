#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings - prints strings
 * @separator: print space and ,
 * @n: number of variable
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int index;
	const char *str;

	va_start(ap, n);
	for (index = 0; index < n; index++)
	{
		str = va_arg(ap, char*);
		if (index < n - 1 && separator != NULL)
		{
			printf("%s", str);
			printf("%s", separator);
		}
		else if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
	}

	va_end(ap);
	printf("\n");
}
