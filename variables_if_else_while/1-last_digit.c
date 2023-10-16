#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	int n;
	int DernierChiffre;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	DernierChiffre = n % 10;

	if (n > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, DernierChiffre);
	}
	else if (n == 5)
	{
		printf("Last digit of %d is %d and is 0\n", n, DernierChiffre);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, DernierChiffre);
	}
	return (0);
}
