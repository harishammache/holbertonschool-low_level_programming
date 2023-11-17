#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct op - new struct type defining a printer.
 * @op: representing a data type.
 * @f: function pointers
 */
typedef struct op
{
	char *ap;
	void (*f)(va_list arg);

} op_t;

#endif
