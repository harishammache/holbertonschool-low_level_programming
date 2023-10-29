#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: first pointeur
 * @size: variable
*/
void print_diagsums(int *a, int size)
{
	int i;
	int firstdiagonal = 0;
	int seconddiagonal = 0;

	for (i = 0; i < size; i++)
	{
		firstdiagonal += a[i * size + i];
	}
	for (i = size - 1; i >= 0; i--)
	{
		seconddiagonal += a[i * size + (size - i - 1)];
	}
	printf("%d, %d\n", firstdiagonal, seconddiagonal);
}
