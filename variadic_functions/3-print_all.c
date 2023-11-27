#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_char - Prints a char.
 * @arg: A list of arguments pointing to the character
 */
void print_char(va_list arg)
{
	char letter;

	letter = va_arg(arg, int);
	printf("%c", letter);
}
/**
 * print_int - Prints an int.
 * @arg: A list of arguments pointing to the integer
 */
void print_int(va_list arg)
{
	int letter;

	letter = va_arg(arg, int);
	printf("%d", letter);
}
/**
 * print_float - Prints a float.
 * @arg: A list of arguments pointing to the float
 */
void print_float(va_list arg)
{
	float decimal_number;

	decimal_number = va_arg(arg, double);
	printf("%f", decimal_number);
}
/**
 * print_string - Prints a string.
 * @arg: A list of arguments pointing to the string
 */
void print_string(va_list arg)
{
	char *str;

	str = va_arg(arg, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}
/**
 * print_all - Prints anything
 * @format: string of caractere who represent all argument
 */
void print_all(const char * const format, ...)
{
	va_list arg;
	int index = 0, index2 = 0;
	char *separator = "";
	op_t op[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL , NULL}
	};
	va_start(arg, format);

	while (format != NULL && (format[index]) != '\0')
	{
		index2 = 0;

		while (index2 <= 3 && format[index] != *(op[index2]).ap)
			index2++;
		if (index2 <= 3)
		{
			printf("%s", separator);
			op[index2].f(arg);
			separator = ", ";
		}
		index++;
	}
	printf("\n");

	va_end(arg);
}
