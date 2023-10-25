#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers
 * @a: first pointeur
 * @n: caractere
*/
void reverse_array(int *a, int n)
{
	int i = 0;
	int y;
	int temporaire = 0;

	while (i < n)
	{
		i++;
	}
	for (y = 0; y < i ; y++)
	{
		i--;
		temporaire = a[i];
		a[i] = a[y];
		a[y] = temporaire;
	}
}
