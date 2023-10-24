#include "main.h"
#include<stdio.h>
/**
 * print_array -  prints n elements of an array of integers
 * @a: pointeur
 * @n: caractere checked
*/
void print_array(int *a, int n)
{
	for (n = 0; a[n] != '\0'; n++)
	{
		if (a[n] == (-1024))
		{
			printf(" %d", a[n]);
			break;
		}
		else
		{
			printf(" %d,", a[n]);
		}
	}
	printf("\n");
}
