#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers from n to 98
 *
 * @n: The caractere is checked
*/
void print_to_98(int n)
{
	int num;

	if (n < 98)
	{
		for (num = n; num <= 98; num++)
		{
			if (num < 98)
			{
				printf("%d, ", num);
			}
			else if (num == 98)
			{
				printf("%d", num);
			}
		}
	}

	if (n > 98)
	{
		for (num = n; num >= 98; num--)
		{
			if (num > 98)
			{
				printf("%d, ", num);
			}
			else if (num == 98)
			{
				printf("%d", num);
			}
		}
	}

	if (n == 98)
	{
		printf("%d", n);
	}

	printf("\n");
}
