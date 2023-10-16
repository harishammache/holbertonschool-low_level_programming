#include <stdio.h>
/**
 * main-Entry point
 *
 * Return  : Always 0 (success)
 */

void inverser_nombres(int *nombreA, int *nombreB)
{
	int temporaire = 0;

	temporaire = *nombreB;
	*nombreB = *nombreA;
	*nombreA = temporaire;
}

int main(void)
{
	int nombreA = 15;
	int nombreB = 28;

	printf("AVANT : A = %d et B = %d\n", nombreA , nombreB);
	inverser_nombres(&nombreA, &nombreB);
	printf("APRES : A= %d et B = %d\n", nombreA , nombreB);

	return 0;
}
